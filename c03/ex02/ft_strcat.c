/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:52:06 by jahn              #+#    #+#             */
/*   Updated: 2021/03/10 16:45:30 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *test;

	test = dest;
	while (*test)
		++test;
	while (*src)
	{
		*test = *src;
		++src;
		++test;
	}
	*test = 0;
	return (dest);
}
