/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:04:01 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/01/25 16:03:40 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 96 && str[i] < 123))
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
	char abc[] = "abcdefghikj";
	char cba[] = "abcdefghi2!";
	char bca[] = "";
	int a = ft_str_is_lowercase(abc);
	int b = ft_str_is_lowercase(cba);
	int c = ft_str_is_lowercase(bca);
	printf("All lower (1): %d \n!All lower (0): %d \nEmpty(1): %d", a, b, c);
}*/
