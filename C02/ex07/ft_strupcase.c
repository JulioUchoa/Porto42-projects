/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:37:09 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/01/30 13:02:38 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int	main(void)
{
	char palavra[] = "bit*coin is power !@3565ASDWQ";
	printf("%s \n", palavra);	
	printf("%s", ft_strupcase(palavra));
	return (0);
}*/
