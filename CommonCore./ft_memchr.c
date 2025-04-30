/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:22:35 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/22 16:58:46 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	This function is used to locate the first occurance 
	of a especific byte in a block of memory. it search
	for N bytes. then returns a pointer for the element
	its looking for, otherwise returns NULL.
	prototype: void *memchr(void *str, int c, size_t n)
*/
void	*ft_memchr(void *str, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*st;
	unsigned char	uc;

	uc = (unsigned char)c;
	st = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (st[i] == uc)
		{
			return (&st[i]);
		}
		i++;
	}
	return (0);
}
