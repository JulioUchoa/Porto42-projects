/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:37:38 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/30 15:57:34 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	atoi converts string to integer. In the Algorithm we need to check
	for each type of empty character, then we need to check if theres
	any signal(-/+). Then we run over the string converting each
	element to integer by adding + '0'
	Ex: "     +12314"
*/
int	ft_atoi(const char *str)
{
	int		i;
	int		total;
	int		signal;

	signal = 1;
	i = 0;
	total = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal = -signal;
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
/*
#include <stdio.h>
int main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	printf("%d", ft_atoi(argv[1]));
	return (0);	
}
*/
