/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 09:47:09 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/01/25 16:02:59 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 47 && str[i] < 58))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	char abc[] = "0123456789";
	char cba[] = "123d456u789";
	char bca[] = "";
	int a = ft_str_is_numeric(abc);
	int b = ft_str_is_numeric(cba);
	int c = ft_str_is_numeric(bca);
	printf(" so numeros(1): %d \n tem letra(0): %d \n vazia(1): %d ", a, b, c);
	return (0);
}*/
