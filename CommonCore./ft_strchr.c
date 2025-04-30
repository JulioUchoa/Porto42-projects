/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:42:55 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/26 16:57:15 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function searchs for the first occurence of a character in a string

-it gets two parameters, the string and the character we want to find

- if it encounters it, the function returns a pointer to that character
	otherwise the fucntions returns NULL
- if the character we are looking for is the null terminator of the str,
	the function returns a pointer to it. 
*/
#include "libft.h"

char	*ft_strchr(char *str, int cha)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)cha)
			return (&str[i]);
		i++;
	}
	if ((char)cha == '\0')
		return (&str[i]);
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	char palavra[] = "teste";
	int letra = 'e';
	if (ft_strchr(palavra, letra))
		printf("achou");
	else
		printf("falso");
}*/
