/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:11:33 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/24 17:46:28 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* it sets a block of memory to zero. Specifically, it takes a pointer
	to a memory location and a lenght (in bytes), and it writes zeros
	to that memory.
*/
#include "libft.h"

void	ft_bzero(char *str, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return ;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
int main(void)
{
	char teste[] = "Bitcoin is Power";
	printf("Before: %s \n", teste);
	ft_bzero(teste, ft_strlen(teste));
	printf("After: %s \n", teste);
	
	return (0);
}*/
