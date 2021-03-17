/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 23:26:40 by jahn              #+#    #+#             */
/*   Updated: 2021/03/17 23:28:28 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(int argc, char *8argv)
{
	int len;

	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		while (len--)
			write(1, &av[1][len], 1);
	}
	ft_putchar('\n');
}

