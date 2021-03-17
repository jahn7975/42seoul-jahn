/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 21:52:40 by jahn              #+#    #+#             */
/*   Updated: 2021/03/08 17:30:20 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		printable(unsigned char c)
{
	if (' ' <= c && c <= '~')
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hex(unsigned char hex)
{
	unsigned char to_hex;
	unsigned char first;
	unsigned char second;

	to_hex = 'a' - 10;
	first = hex / 16;
	second = hex % 16;
	first += (first > 9) ? to_hex : '0';
	second += (second > 9) ? to_hex : '0';
	ft_putchar('\\');
	ft_putchar(first);
	ft_putchar(second);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!printable(str[i]))
		{
			ft_put_hex(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		++i;
	}
}
