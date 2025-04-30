/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:29:15 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/30 15:56:01 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* this function takes threee arguments, a string,
	a substring and a size_t size. It searchs for the sub string
		in the string, if it finds it, returns a pointer for the
			first element of the substring found in the string.
		prototype: char *strnstr(char *string, char *substring, size_t n)
*/
#include "libft.h"

char	*ft_strnstr(const char *t, const char *s, size_t n)
{
	size_t	i;
	size_t	j;

	if (s[0] == '\0')
		return ((char *)t);
	if (t == s)
		return ((char *)t);
	i = 0;
	while (t[i] != '\0' && i < n)
	{
		j = 0;
		if (t[i] == s[j])
		{
			while (t[i + j] == s[j] && s[j] != '\0')
			{
				j++;
				if ((i + j) == n)
					break ;
			}
			if (s[j] == '\0')
				return ((char *)&t[i]);
		}
		i++;
	}
	return (0);
}
