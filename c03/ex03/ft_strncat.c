/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:52:44 by jahn              #+#    #+#             */
/*   Updated: 2021/03/10 16:50:55 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*test;

	i = 0;
	test = dest;
	while (*test)
		++test;
	while (*src && i < n)
	{
		*test = *src;
		++src;
		++test;
		++i;
	}
	*test = 0;
	return (dest);
}
