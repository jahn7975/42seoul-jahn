/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 20:50:43 by jahn              #+#    #+#             */
/*   Updated: 2021/03/08 14:16:22 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	perfect(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (!perfect(str[i++]))
			return (0);
	return (1);
}
