/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 20:30:22 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/02/03 19:05:03 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb == 2)
	{
		return (2);
	}
	i = 0;
	res = 1;
	while (nb != 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
/*#include <stdio.h>
int	main(void)
{
	int total;
	int	n;

	n = -3;

	total = ft_iterative_factorial(n);
	printf("Fatorial de %d > %d", n,  total);
	return (0);
}*/
