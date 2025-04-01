/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:59:03 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/01/25 16:06:56 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int	main(void)
{
	char	frase[] = "TeStAnDo PrOgRaMa ABV@#!531ZVX";
	printf("frase antes: %s \n", frase);
	printf("frase depois: %s \n", ft_strlowcase(frase));
	return (0);
}*/
