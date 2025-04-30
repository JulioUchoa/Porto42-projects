/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:36:20 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/22 16:11:57 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		c += 32;
	}
	return (c);
}
/*
#include <stdio.h>
int main(void)
{
	char teste[] = "ABCD";
	printf("%s\n", ft_tolower(teste));
	return (0);
}*/
