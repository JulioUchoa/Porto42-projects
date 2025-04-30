/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:46:52 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/26 19:31:36 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	This function compares the character of both
	 strings one by one up to a maximum of N characters 
		or until a null-terminator '\0' is encountered in either string
	prototype: int strncmp(char *str1, char *str2, size_t n)
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char)s1[i] != '\0'
			|| (unsigned char)s2[i] != '\0') && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include  <stdio.h>
#include <string.h>
int main(void)
{
	unsigned char palavra[] = "Bitcoin";
	unsigned char pala[] = "Bitcoim";
	int res;
	int ris;

	ris = strncmp(palavra, pala, 5);
	res = ft_strncmp(palavra, pala, 5);
	printf("copy: %d\n", res);
	printf("orig: %d", ris);
	return (0);
}*/
