/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:52:55 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/01/28 14:41:46 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && *(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
int	main(void)
{
	char destino[25] = "";
	char fonte[] = "Bitcoin is the Future";

	printf("destino antes: %s \n", destino);
	printf("fonte: %s \n", fonte);
	ft_strncpy(destino, fonte, 21);
	printf("destino depois: %s\n", destino);
}*/
