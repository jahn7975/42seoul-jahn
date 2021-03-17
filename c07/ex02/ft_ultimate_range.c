/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 05:08:26 by jahn              #+#    #+#             */
/*   Updated: 2021/03/17 16:27:15 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int bound;
	int *buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min;
	if ((buffer = (int*)malloc(sizeof(int) * bound)) == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	i = 0;
	while (i < bound)
	{
		buffer[i] = min + i;
		i++;
	}
	return (bound);
}
