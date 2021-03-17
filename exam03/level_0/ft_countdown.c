/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 21:44:45 by jahn              #+#    #+#             */
/*   Updated: 2021/03/17 21:46:29 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int i;

	i = 9;
	while (i > -1)
	{
		ft_putchar(i + '0');
		i--;
	}
	write(1, "\n", 1);
	return (0);
}
