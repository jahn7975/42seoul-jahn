/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 22:32:13 by jahn              #+#    #+#             */
/*   Updated: 2021/03/17 22:52:12 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *8argv)
{
	int i;
	
	i = 0;
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[2][i])
	{
		if (i > 1)
		{
			write(1, "\n", 1);
			return (0);
		}
		i++;
	}
	i = 0;
	while (argv[1][i] )
	{
		if (argv[1][i] == argv[2][0])
		{
			argv[1][i] = argv[3][0];
		}
		ft_putchar(argv[1][i]);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
