/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 22:47:55 by jahn              #+#    #+#             */
/*   Updated: 2021/03/06 17:52:10 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int a, int b)
{
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	while (x < 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_print_number(x, y);
			ft_putchar(',');
			ft_putchar(' ');
			y++;
		}
		x++;
	}
	if (x == 98)
	{
		y = x + 1;
		ft_print_number(x, y);
	}
}
