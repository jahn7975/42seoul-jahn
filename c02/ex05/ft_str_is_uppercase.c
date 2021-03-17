/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 21:07:36 by jahn              #+#    #+#             */
/*   Updated: 2021/03/08 14:27:13 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	perfect(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (!perfect(str[i++]))
			return (0);
	return (1);
}
