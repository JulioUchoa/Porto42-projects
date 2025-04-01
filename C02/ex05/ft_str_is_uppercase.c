/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:25:12 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/01/25 16:04:19 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 64 && str[i] < 91))
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
	char abc[] = "ABCDEFGHTYUJ";
	char bca[] = "ABCDGET5resd";
	char cba[] = "";
	int a = ft_str_is_uppercase(abc);
	int b = ft_str_is_uppercase(bca);
	int c = ft_str_is_uppercase(cba);
	printf("All upper(1):%d\n !All upper(0): %d\n Empty(1): %d", a, b, c);
	return (0);
}*/
