/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:01:04 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/02/03 20:22:25 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power == 1)
	{
		return (nb);
	}
	return (nb * ft_recursive_power(nb, (power - 1)));
}
/*#include <stdio.h>
int	main(void)
{
	int nb;
	int power;
	int res;

	nb = 3;
	power = 3;
	res = ft_recursive_power(nb, power);
	printf("%d", res);
	return (0);
}*/
