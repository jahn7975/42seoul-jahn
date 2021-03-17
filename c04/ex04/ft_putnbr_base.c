/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 21:21:19 by jahn              #+#    #+#             */
/*   Updated: 2021/03/13 23:19:14 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int n, char *base)
{
	write(1, &base[n], 1);
}

void	ft_putnbr(int nbr, int b, char *base)
{
	if (nbr >= b)
		ft_putnbr(nbr / b, b, base);
	ft_print(nbr % b, base);
}

int		check_base(char *base)
{
	int i;
	int j;

	if (!base[0] || !base[1])
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;

	i = check_base(base);
	if (i == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (nbr == -2147483648)
		{
			ft_putnbr(-(nbr / i), i, base);
			ft_print(-(nbr % i), base);
			return ;
		}
		nbr *= -1;
	}
	ft_putnbr(nbr, i, base);
}
