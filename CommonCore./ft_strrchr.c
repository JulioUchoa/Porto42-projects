/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:51:59 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/26 16:56:54 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function works like the STRCHR but instead of
looking for the first occurence of a given char, it looks
for the last one.
	prototype: char *name(char *str, int cha)
 */
#include "libft.h"

char	*ft_strrchr(char *str, int cha)
{
	int		str_len;
	char	*c;

	str_len = 0;
	str_len = ft_strlen(str);
	if (cha == '\0')
		return (&str[str_len]);
	while (str_len >= 0)
	{
		if (str[str_len] == (char)cha)
		{
			c = &str[str_len];
			return (c);
		}
		str_len -= 1;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char palavra[] = "Bitcoin";
	int cha = 116;

	printf("original: %s\n", strrchr(palavra, cha));
	printf("copia: %s\n", ft_strrchr(palavra, cha));
	return (0);
	
}*/
