/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:47:56 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/01/31 11:26:53 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		total;
	int		signal;

	i = 0;
	signal = 1;
	total = 0;
	while (str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			signal = -signal;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10;
		total = total + (str[i] - '0');
		i++;
	}
	return (total * signal);
}
#include <stdio.h>
// " ---+--+1234ab567"
int	main(int ac, char **av)
{
	if (ac != 2)
	{
		return (0);
	}
	printf("%d", ft_atoi(av[1]));
}
