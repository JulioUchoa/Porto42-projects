/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:41:18 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/07 16:35:06 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	leng;
	int	*array;
	int	i;

	leng = max - min;
	if (min >= max)
		return (NULL);
	array = malloc(leng * sizeof(int));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>
int main(void)
{
	
	int	*arr;

	arr = ft_range(5, 10);
	for (int i; i < 5; i++)
	{
		printf("%d", arr[i]);
	}
	return (0);
}*/
