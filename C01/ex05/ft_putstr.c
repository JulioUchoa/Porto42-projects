/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:17:42 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/01/20 18:47:09 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (*(str + x) != 0)
	{
		write(1, str + x, 1);
		x++;
	}
}
/*#include <stdio.h>
int	main(void)
{	
	ft_putstr("teste");
	return (0);
}*/
