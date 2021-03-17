/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 23:12:23 by jahn              #+#    #+#             */
/*   Updated: 2021/03/17 23:25:24 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))//argv[i][j] = *argv[i]
				i++;
			while (argv[1][i] &&(argv[1][i] != ' ' && argv[1][i] != '\t'))	
			{
				ft_putchar(av[1][i]);
				i++;
			}
		}
		ft_putchar('\n');
		return (0);
}
