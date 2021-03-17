/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 21:10:43 by jahn              #+#    #+#             */
/*   Updated: 2021/03/14 00:59:08 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	m;
	int	total;

	i = 0;
	total = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		++i;
	m = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			m *= -1;
		++i;
	}
	if (str[i] < '0' || str[i] > '9')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + (str[i] - '0') * m;
		++i;
	}
	return (total);
}
