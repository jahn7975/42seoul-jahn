/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 20:47:51 by jahn              #+#    #+#             */
/*   Updated: 2021/03/08 20:12:21 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	perfect(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (!perfect(str[i++]))
			return (0);
	return (1);
}
