/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 17:44:53 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/02 18:46:36 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	res = 1;
	while (nb != 1)
	{
		res *= nb;
		nb -= 1;
	}
	return (res);
}

/*#include <stdio.h>
int main()
{
	printf("%d",ft_iterative_factorial(7));
	return (0);
}*/
