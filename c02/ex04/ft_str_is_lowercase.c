/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 20:53:09 by jahn              #+#    #+#             */
/*   Updated: 2021/03/08 14:24:38 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	perfect(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (!perfect(str[i++]))
			return (0);
	return (1);
}
