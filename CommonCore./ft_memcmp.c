/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 20:10:11 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/22 17:14:22 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	memcmp compares two strings, byte-by-byte for N bytes.
	it looks like strncmp but it can compare binary and
	dont mind with NULL terminators.
	prototype: int memcmp(const void *ptr1, const void *ptr2, size_t n)
*/
int	ft_memcmp(const void *str1, const void *str2, unsigned int n)
{
	unsigned int	i;
	const char		*st1;
	const char		*st2;

	st1 = (const char *)str1;
	st2 = (const char *)str2;
	i = 0;
	while (i < n)
	{
		if (st1[i] != st2[i])
		{
			return ((unsigned char)st1[i] - (unsigned char)st2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	void *palavra = "aitcoin";
	void *pala = "bitcoin";
	unsigned int n = 3;
	int resp;
	resp = memcmp(palavra, pala, n);
	printf("%d", resp);
	return (0);
}*/
