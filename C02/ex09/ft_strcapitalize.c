/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:09:48 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/02/04 22:04:41 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void strprint(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char *ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 90 && str[i] <= 122)
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] || str[i - 1] == ' ' || str[i - 1] == '-' 
			|| str[i - 1 ] == '+')
		{
			str[i] -= 32;
		}
		i++;
	}
	strprint(str);
	return (0);
}
int	main(void)
{
	char palavra[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	ft_strcapitalize(palavra);
	return (0);
}
