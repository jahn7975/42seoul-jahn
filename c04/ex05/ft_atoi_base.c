/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 00:45:21 by jahn              #+#    #+#             */
/*   Updated: 2021/03/14 00:57:56 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi_check_base(char *base)
{
	int i;
	int j;

	if (!base[0] || !base[1])
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == '\t'
				|| base[i] == '\n' || base[i] == '\r' || base[i] == '\f'
				|| base[i] == ' ')
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

int	ft_sub(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int sum;
	int base_len;
	int sign;

	sign = 1;
	if (atoi_check_base(base) == 0)
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	base_len = atoi_check_base(base);
	sum = 0;
	while (ft_sub(*str, base) != -1)
	{
		sum *= base_len;
		sum += ft_sub(*str, base);
		str++;
	}
	return (sum * sign);
}
