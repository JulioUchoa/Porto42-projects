/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:41:12 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/01/30 10:25:17 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && --n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	int	x;
	int y;  

	char	word1[] = "afdc";
	char	word2[] = "abxpo";
		
	y = strncmp(word1, word2, 3);
	x = ft_strncmp(word1, word2, 3);
	
	printf("copied ft_strncmp: %d \n", x);
	printf("origial strncmp: %d \n", y);
	
	return (0);
}*/
