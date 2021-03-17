/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahn <jahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 22:08:17 by jahn              #+#    #+#             */
/*   Updated: 2021/03/14 01:19:32 by jahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fib(int n, int a, int b)
{
	if (n == 0)
		return (a);
	if (n == 1)
		return (b);
	return (fib(n - 1, b, a + b));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	return (fib(index, 0, 1));
}
