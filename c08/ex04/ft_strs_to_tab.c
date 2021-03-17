/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:29:22 by jahn              #+#    #+#             */
/*   Updated: 2021/03/15 23:59:46 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_len(char *sss)
{
	int i;

	i = 0;
	while (sss[i])
		i++;
	return (i);
}

void				ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *ret;
	int			i;

	ret = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!ret)
		return (0);
	i = 0;
	while (i < ac)
	{
		ret[i].size = ft_len(av[i]);
		ret[i].str = (char*)malloc(ret[i].size + 1);
		ret[i].copy = (char*)malloc(ret[i].size + 1);
		ft_strcpy(ret[i].str, av[i]);
		ft_strcpy(ret[i].copy, av[i]);
		++i;
	}
	ret[i].str = 0;
	ret[i].copy = 0;
	return (ret);
}
