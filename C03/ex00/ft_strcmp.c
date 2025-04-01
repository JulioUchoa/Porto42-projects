/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:35:35 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/02/03 18:01:51 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != 0))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
#include <stdio.h>
#include <string.h>
int	main(void)
{
	int	x;
	char word1[] = "Julio Cezar";
	char word2[] = "Kulio Cezar";
	char word3[] = "Aulio Cezar";
	char word4[] = "Zulio Cezar";
	x = strcmp(word1, word2);
	printf("original strcmp: %d \n", x);
	printf("copia ft_strcmp: %d", ft_strcmp(word1, word2));
}
