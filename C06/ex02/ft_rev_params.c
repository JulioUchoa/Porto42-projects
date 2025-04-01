/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 13:52:20 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/02/02 14:07:08 by jcezar-l         ###   ########.fr       */
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

	counter = argc - 1;
	while (counter > 0)
	{
		i = 0;
		while (argv[counter][i] != '\0')
		{
			putchar(argv[counter][i]);
			i++;
		}
		counter--;
		write(1, "\n", 1);
	}
	return (0);
}
