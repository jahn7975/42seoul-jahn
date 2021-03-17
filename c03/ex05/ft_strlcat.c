/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:55:56 by jahn              #+#    #+#             */
/*   Updated: 2021/03/10 16:25:24 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (*dest && i < size)
	{
		++i;
		++dest;
	}
	while (*src && i + 1 < size)
	{
		*dest = *src;
		++dest;
		++src;
		++i;
	}
	if (i < size)
		*dest = 0;
	while (*src)
	{
		++i;
		++src;
	}
	return (i);
}
