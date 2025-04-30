/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:54:50 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/21 19:58:59 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* its used to fill a block of memory with a espific value
*/

void	*ft_memset(void *ptr, int value, unsigned int num)
{
	unsigned int	i;
	unsigned char	*pt;

	pt = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		pt[i] = value;
		i++;
	}
	return (pt);
}
/*
#include <stdio.h>

int main(void)
{
    char buffer[] = "testando a funcao";
    printf("Before: %s \n", buffer);
	ft_memset(buffer, '#' , 4);
	printf("after: %s \n", buffer);
    return (0);
}*/
