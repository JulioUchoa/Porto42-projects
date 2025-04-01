/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:57:52 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/01/20 15:15:06 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

/*#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;	
		
	a = 3;
	b = 5;
	printf("Antes a = %d, b = %d\n", a, b);
	printf("Depois b = %d, a = %d\n", a, b);
}*/
