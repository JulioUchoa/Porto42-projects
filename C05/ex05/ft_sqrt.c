/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:19:52 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/02/01 19:54:48 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	if (nb == 0)
	{
		return (0);
	}
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	n = 0;
	while (n < nb)
	{
		if ((n * n) == nb)
		{
			return (n);
		}
		n++;
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	int num;
	printf("input an positive number:\n");
	num = 121;
	printf("square root of %d = %d", num,  ft_sqrt(num));
	return (0);
}*/
