/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 21:14:31 by jahn              #+#    #+#             */
/*   Updated: 2021/03/08 14:29:21 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	perfect(char c)
{
	if (' ' <= c && c <= '~')
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (!perfect(str[i++]))
			return (0);
	return (1);
}
