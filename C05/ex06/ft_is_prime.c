/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 20:03:39 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/02/01 22:54:53 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	c;

	if (nb == 1 || nb == 0)
	{
		return (0);
	}
	c = 2;
	while (c < nb)
	{
		if (nb % c == 0)
		{
			return (0);
		}
		c++;
	}
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	int	n;

	n = 11;
	printf("entrada: %d\nsaida %d\n", n, ft_is_prime(n));
	printf("---------------------------\n");
	printf("prime: 1 \nnon-prime: 0\n");
	return (0);
}*/
