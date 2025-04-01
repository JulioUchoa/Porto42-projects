/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:31:37 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/01/22 16:50:58 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (*(src + x) != 0)
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char	destino[20] = "0";
	char	casa[] = "casa";

	printf("%s", destino);
	printf("antes %s \n", casa);
	ft_strcpy(destino, casa);
	printf("depois %s", destino);
}*/
