/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 21:23:34 by jahn              #+#    #+#             */
/*   Updated: 2021/03/08 14:39:03 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		perfect(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (perfect(str[i]))
			str[i] = str[i] + 32;
		++i;
	}
	return (str);
}
