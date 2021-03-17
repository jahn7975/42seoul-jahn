/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 21:16:48 by jahn              #+#    #+#             */
/*   Updated: 2021/03/08 14:34:09 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		perfect(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (perfect(str[i]))
			str[i] = str[i] - 32;
		++i;
	}
	return (str);
}
