/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 21:37:12 by jahn              #+#    #+#             */
/*   Updated: 2021/03/08 20:23:31 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		numberyes(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int		alphasmall(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int		alphabig(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int		rules(char c)
{
	if (numberyes(c))
		return (1);
	if (alphabig(c))
		return (1);
	if (alphasmall(c))
	

		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if (!rules(str[i]))
			j = 1;
		else
		{
			if (j && alphasmall(str[i]))
				str[i] = str[i] - 32;
			else if (!j && alphabig(str[i]))
				str[i] = str[i] + 32;
			j = 0;
		}
		++i;
	}
	return (str);
}
