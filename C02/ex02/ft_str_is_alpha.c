/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:51:10 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/01/25 16:02:37 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)))
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
	char abc[] = "abcdefghijklmnopqrstuvwxyz";
	//char a1c[] = "";
	printf("%d", ft_str_is_alpha(abc));
	return (0);
}*/
