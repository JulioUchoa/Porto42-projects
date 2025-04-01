/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:10:44 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/01/20 17:19:28 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	int	temp1;

	temp = *a;
	temp1 = *b;
	*a = temp / temp1;
	*b = temp % temp1;
}
/*#include <stdio.h>

int	main(void)
{	
	int	a;
	int	b;

	a = 20;
	b = 4;
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d, b = %d", a, b);
}*/
