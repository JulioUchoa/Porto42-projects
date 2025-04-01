/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:56:15 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/01/28 19:21:06 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	strlen_(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = strlen_(dest);
	src_len = strlen_(src);
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	i = dest_len;
	j = 0;
	while ((i < size -1) && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char d[] = "bit";
	char e[] = "coin";
	printf("string 1 len: %u \n", strlen_(d));
	printf("string 2 len: %u \n", strlen_(e));
	printf("total string len: %u", ft_strlcat(e, d, 20));
	return (0);
}*/
