/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 23:32:55 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/02/04 15:55:02 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	prime;
	int	flag;

	if (nb == 1 || nb == 0)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (2);
	}
	prime = 2;
	flag = 0;
	while (flag != 1)
	{
		if (prime >= nb && nb % prime == 0)
		{
			flag = 1;
		}
		prime++;
	}
	return (prime);
}
/*#include <stdio.h>
int	main(void)
{
	printf(" nb or next prime: %d \n", ft_find_next_prime(28));
	return (0);
}*/
