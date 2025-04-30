/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:51:40 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/24 16:48:44 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (ft_strlen(src));
	if (!dest)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i < (size -1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char palavra[] = "Bitcoin";
	char pala[5];
	char lavra[5];
	int teste =	strlcpy(pala, palavra, 3);
	int teste1 = ft_strlcpy(lavra, palavra, 3);
	
	printf("original: %d", teste);
	printf("copia: %d", teste1);
	return (0);
}*/
