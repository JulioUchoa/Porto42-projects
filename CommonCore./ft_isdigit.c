/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:06:40 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/21 19:32:00 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int nb)
{
	if (!(nb >= 48 && nb <= 57))
	{
		return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
	char teste[] = "11110";
	printf("true=1 | false=0 :: %d", ft_isdigit(teste));
	return (0); 
}*/
