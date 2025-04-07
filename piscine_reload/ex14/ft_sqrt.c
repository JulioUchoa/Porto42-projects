/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 19:41:02 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/02 19:56:01 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	i;

	if (nb == 0)
		return (0);
	if (nb < 0)
		return (1);
	i = 0;
	while (i < nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d", ft_sqrt(7));
	return (0);
}*/
