/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 09:12:14 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/01/19 12:00:51 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	prim;
	char	segu;
	char	terc;
	
	prim = '/';
	while (prim++ < '7')
	{
		segu = prim;
		while (segu++ < '8')
		{
			terc = segu;
			while (terc++ < '9')
			{
				write(1, &prim, 1);
				write(1, &segu, 1);
				write(1, &terc, 1);
				if (prim != '7')
				{
					write(1, ", ", 2);
				}
			}
		}
	}	
}

/*int	main(void)
{
	ft_print_comb();
	return (0);	
}*/
