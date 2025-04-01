/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:52:00 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/01/24 12:02:49 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 127))
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
	char abc[] = " !\"$%~'few.6358";
	char cba[] = {10, 5, 25, 21};
	char bca[] = "";
	int a = ft_str_is_printable(abc);
	int b = ft_str_is_printable(cba);
	int c = ft_str_is_printable(bca);
	printf("printable(1):%d \n!printable(0):%d \nEmpty(1): %d", a, b, c);
	return (0);
}*/
