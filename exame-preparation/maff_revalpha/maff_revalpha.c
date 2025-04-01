/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 22:10:03 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/02/05 09:40:37 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(void)
{
	int	letter;

	letter = 122;
	while (letter > 96)
	{
		if (letter % 2 != 0)
		{
			letter -= 32;
			write(1, &letter, 1);
			letter += 32;
		}
		else
			write(1, &letter, 1);
		letter--;
	}
	write(1, "\n", 1); 
	return (0);
}
