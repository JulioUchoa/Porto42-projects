/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:17:23 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/30 16:05:36 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* in this function, we need to create a substring derived from
	the main string, the first([0]) element of the substring
	shall be equal to 'start' and it must continue copying
	until it reaches the size of len
	"JULIO" 2 3
*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char			*sub;
	unsigned int	i;

	i = ft_strlen(s);
	if (len > i)
		len = i;
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (!s)
		return (NULL);
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, &s[start], len + 1);
	return (sub);
}
