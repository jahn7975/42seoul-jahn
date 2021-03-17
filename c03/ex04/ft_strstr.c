/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:53:46 by jahn              #+#    #+#             */
/*   Updated: 2021/03/10 16:20:29 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *a;
	char *b;

	if (!*to_find)
		return (str);
	while (*str)
	{
		a = str;
		b = to_find;
		while (*b && *a == *b)
		{
			++a;
			++b;
		}
		if (*b == 0)
			return (str);
		++str;
	}
	return (0);
}
