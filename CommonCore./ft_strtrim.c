/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:32:32 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/26 19:24:36 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* is typically used to remove leading and trailing whitespaces
	or other specified charactersi(c) from a string

	the 'help' function takes two arguments, the string
	pointer and a character. it checks if c exists in string

	in the ft_strtrim body
	1. test if s1 and set exists
	2. define start and end
	3. loop to check if 'c' in s1, then add+1
	4. if begin == end. it means all char
	were trimmed, the return empty string
	5. loop to check if 'c' in s1, but from end-start
	6. create memory space
	7. fill it with substr return
*/
static int	help(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int			begin;
	int			end;
	char		*buff;

	if (!s1 && !set)
		return (ft_strdup(""));
	begin = 0;
	end = ft_strlen(s1);
	while (help(set, s1[begin]))
		begin++;
	if (begin == end)
		return (ft_strdup(""));
	while (help(set, s1[end - 1]))
		end--;
	buff = ft_substr(s1, begin, end - begin);
	return (buff);
}
