/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:51:57 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/09 18:20:29 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int nb)
{
	if ((nb >= 0 && nb <= 127))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main(void)
{
	int teste1  = 123;
	int teste2  = 200;
	printf("123 : %d\n", ft_isascii(teste1));
	printf("300 : %d\n", ft_isascii(teste2));
	return (0);
}*/
