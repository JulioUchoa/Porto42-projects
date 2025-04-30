/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:54:38 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/26 19:23:22 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	calloc works like malloc but it doesnt let the
	memory spaces blank, instead it allocates '0'
	for each memory slot.
*/
#include "libft.h"

void	*ft_calloc(unsigned int num, unsigned int size)
{
	void	*su;

	su = (char *)malloc(num * size);
	if (!su)
		return (NULL);
	ft_bzero(su, num * size);
	return (su);
}
/*
#include <stdio.h>

int main(void)
{
	int	i;
	int num_elements = 5;
	int *arr = (int *)ft_calloc(num_elements, sizeof(int));

	if (arr == NULL)
	{
		printf("Memory allocation Failed");
		return (1);
	}
	i = 0;
	while (i < num_elements)
	{
		if (arr[i] != 0)
		{
			printf("test failed: arr[%d] is not zero!, value %d \n!", i, arr[i]);
			return (1);
		}
		i++;
	}
	free(arr);
	return (0);
}*/
