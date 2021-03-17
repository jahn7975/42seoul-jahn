/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:56:57 by jahn              #+#    #+#             */
/*   Updated: 2021/03/17 15:16:03 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int			i;
	char		*ret;

	i = 0;
	while (src[i])
		++i;
	ret = (char*)malloc(i + 1);
	if ((ret = (char*)malloc(sizeof(char) * i + 1)) == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}
