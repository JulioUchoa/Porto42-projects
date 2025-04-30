/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:21:52 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/21 19:39:49 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalnum(int nb)
{
	if (!((nb >= 65 && nb <= 90)
			|| (nb >= 97 && nb <= 122)
			|| (nb >= 48 && nb <= 57)))
	{
		return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
	char teste[] = "1235gdss!";
	char teste1[] = "1234eSDFW";
	
	printf("teste 123gdss!:: %d\n", ft_isalnum(teste));
	printf("teste1 1234eSDFW:: %d\n", ft_isalnum(teste1));

	return (0);
}*/
