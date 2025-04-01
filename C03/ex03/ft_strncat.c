/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:34:34 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/01/31 11:14:20 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (dest == 0 || src == 0)
	{
		return (0);
	}
	while (dest[i])
	{
		i++;
	}
	while (src[j] && (j < nb))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	word[100] = "primeira,";
	char	word1[100] = "primeira,";
	char	word2[100] = "segunda,";
	char	word3[100] = "segunda,";
	printf("  copied: %s\n", ft_strncat(word, word3, 15));
	printf("original: %s", strncat(word1, word2, 15));
}*/
