/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 09:54:26 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/02/06 10:29:48 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include <unistd.h>

void	prin(int c)
{
	write(1, &c, 1);
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

int	main(void)
{
	int i;
	int j;
	
	#include <stdio.h>
	i = 100;
	ft_putnbr(i);
	return (0);
	
}
