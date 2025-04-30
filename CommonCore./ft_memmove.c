/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:34:09 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/22 15:24:41 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* this fucntion is used to copy a block of memory from one
	location to another, and it is specifically designed to 
	handle overlapping memory regions safely
	we are doing it starting from the last character n - i - 1
*/
static unsigned char	*h(unsigned char *d,
const unsigned char *src, unsigned int n)
{
	unsigned int	i;

	if ((d > src) && (d < src + n))
	{
		i = 0;
		while (i < n)
		{
			d[n - i - 1] = src[n - i - 1];
			i++;
		}
		return (d);
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = src[i];
			i++;
		}
		return (d);
	}
}

void	*ft_memmove(void *dest_str, const void *src_str, unsigned int n)
{
	unsigned char		*dest;
	const unsigned char	*src;

	dest = (unsigned char *)dest_str;
	src = (unsigned char *)src_str;
	if ((dest == src) || (n == 0))
		return (dest);
	h(dest, src, n);
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char palavra[] = "Bitcoin";

	char lavra[5];
	char pala[5];

	memmove(lavra, palavra, 4);	
	printf("memmove: %s\n", lavra);
	
	ft_memmove(pala, palavra, 4);
	printf("ft_memmove: %s\n", pala);


	return (0);
}*/
