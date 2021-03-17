/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:45:40 by jahn              #+#    #+#             */
/*   Updated: 2021/03/17 15:16:27 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int range;
	int i;
	int *buffer;

	if (min >= max)
		return (0);
	range = max - min;
	if ((buffer = (int*)malloc(range * sizeof(int))) == NULL)
		return (0);
	i = 0;
	while (i < range)
	{
		buffer[i] = min + i;
		i++;
	}
	return (buffer);
}
