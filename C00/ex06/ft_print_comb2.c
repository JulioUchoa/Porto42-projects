/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:45:43 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/01/25 14:37:20 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void prin(int a, int b, int c, int d)
{
	printf("teste prin (1)");
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, ", ", 2);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	loop(int a, int b, int c, int d)
{
	printf("teste loop (2)");
	while (a < 10)
	{
		while (b < 10)
        {
            while (c < 10)
            {
                while (d < 10)
                {
                    if (d == 9)
                        c += 1;
                    if (c == 9)
                        b += 1;
                    if (b == 9)
                        a += 1;
                    prin(a, b, c, d);
                    d++;
                }
            }
        }
    }
}
int		main(void)
{
	printf("teste main (3)");



	loop(0, 0, 0, 0);
	return (0);
}
