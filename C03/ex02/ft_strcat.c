/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 22:41:31 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/01/29 18:10:47 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
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
	char	source1[100] = "casa";
	char	source[100] = "casa";
	char	destination[] = "mento";
	printf("destino: %s \n", source);
	printf("fonte: %s \n", destination);
	printf("final: %s \n", ft_strcat(source, destination));
	printf("original func: %s", strcat(source1, destination));
	return (0);
}*/
