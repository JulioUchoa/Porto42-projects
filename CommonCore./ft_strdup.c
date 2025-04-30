/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:06:49 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/26 15:18:03 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	it creates a copy of a given string, but first
	it creates a memory location for that copy
*/
#include "libft.h"

char	*ft_strdup(char *str)
{
	int		i;
	char	*dest;

	dest = malloc(ft_strlen(str) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
