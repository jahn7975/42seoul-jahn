/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:47:21 by jahn              #+#    #+#             */
/*   Updated: 2021/03/06 17:48:48 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	func(char a, char b, char c, int comma)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (comma == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				if (a == '7')
					func(a, b, c, 0);
				else
					func(a, b, c, 1);
				c++;
			}
			b++;
		}
		a++;
	}
}
