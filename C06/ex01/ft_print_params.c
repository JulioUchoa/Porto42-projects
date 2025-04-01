/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 13:17:19 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/02/02 13:49:11 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	counter;
	int	i;

	if (argc < 2)
	{
		return (0);
	}
	counter = 1;
	while (argc > 1)
	{
		i = 0;
		while (argv[counter][i] != '\0')
		{
			putchar(argv[counter][i]);
			i++;
		}
		write(1, "\n", 1);
		counter++;
		argc--;
	}
	return (0);
}
