/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 21:53:35 by jahn              #+#    #+#             */
/*   Updated: 2021/03/15 13:36:11 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int ret;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	ret = 1;
	while (nb)
		ret *= (nb--);
	return (ret);
}
