/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:12:54 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/02/01 15:56:26 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		n;

	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	n = 1;
	while (power != 0)
	{
		n *= nb;
		power--;
	}
	return (n);
}
/*#include <stdio.h>
int	main(void)
{
	int	n;
	int	power;
	int	sol;

	n = 5;
	power = 4;
	sol = ft_iterative_power(5, 4);
	printf("solution > %d\n", sol);
		
}*/
