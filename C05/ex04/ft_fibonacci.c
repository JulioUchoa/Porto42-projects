/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:43:24 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/02/01 19:53:19 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 1)
	{
		return (1);
	}
	if (index > 1)
	{
		index = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	return (index);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_fibonacci(20));
	return (0);
}*/
