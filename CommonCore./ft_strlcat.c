/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:40:54 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/22 16:07:02 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function will add a array src to dest
	it takes three arguments: 
	1. a pointer to the destination array
	2. a pointer to the source array
	3. the size of the dest buffer

 */
#include "libft.h"

int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	total;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	total = len_dest + len_src;
	if (size == 0)
		return (len_src);
	if (size <= len_dest)
		return (len_src + size);
	i = len_dest;
	j = 0;
	while (i < (size - 1) && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (total);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char destino[30] = "Bitcoin";
	char destina[30] = "Breath";
	char origi[] = " Is power!";
	char ori[] = " Is power!";
	int n, m;
	
	n = ft_strlcat(destino, origi, 10);
	m = strlcat(destina, ori, 10);
	printf("copia > Depois: %s | retorno: %d \n", destino, n);
	printf("original > Depois: %s | retorno: %d \n", destina, m);
	return (0);
}*/
