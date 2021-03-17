/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 11:28:47 by jahn              #+#    #+#             */
/*   Updated: 2021/03/06 18:09:55 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 10 && nb >= 0)
		ft_putchar(nb + '0');
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else if (nb == -2147483648)
	{
		ft_putchar('-');
		write(1, "2147483648", 10);
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
}
