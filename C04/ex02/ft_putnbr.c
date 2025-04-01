/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 22:00:22 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/01/29 14:17:43 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	prin(int c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		prin('-');
		prin('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		prin('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		prin(nb + 48);
}
/*
#include <stdio.h>
int	main(void)
{

 	int a = 2147483647;
	int b = -2147483648;
	int c = 3125;
	int d = -123;
	int e = 0;
	ft_putnbr(a);
	printf("\n");
	ft_putnbr(b);
	printf("\n");
	ft_putnbr(c);
	printf("\n");
	ft_putnbr(d);
	printf("\n");
	ft_putnbr(e);
	return (0);
}*/
