/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:27:18 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/26 14:59:57 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* its used to copy a specified number of bytes from one memory
	location to another.
*/
#include "libft.h"

void	*ft_memcpy(void *dest_str, const void *src_str, unsigned int n)
{
	unsigned int		i;
	unsigned char		*dest;
	const unsigned char	*src;

	if (!dest_str && !src_str)
		return (NULL);
	dest = (unsigned char *)dest_str;
	src = (const unsigned char *)src_str;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest_str);
}
/*
#include <stdio.h>
int main(void)
{
    char palavra[] = "Transformar";
    char pala[26] = "";

    printf("Before:: palavra: %s | pala: %s\n", palavra, pala);

    ft_memcpy(pala, palavra, 5);

    printf("After:: palavra: %s | pala: %s\n", palavra, pala);



    return (0);
}*/
