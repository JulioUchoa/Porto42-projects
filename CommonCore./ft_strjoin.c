/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:56:52 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/22 19:16:18 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*buff;

	buff = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!buff)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		buff[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		buff[i + j] = s2[j];
		j++;
	}
	buff[i + j] = '\0';
	return (buff);
}
/*
#include <stdio.h>
int main(void)
{
	char s1[] = "Bitcoin";
	char s2[] = " is Power!";
	char *s3;
	s3 = ft_strjoin(s1, s2);
	printf("%s", s3);
	return (0);
}*/
