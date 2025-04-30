/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:26:40 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/24 17:19:38 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* this function will split the given string in N pieces
	using a char as delimiter and will return a pointer
	to a list of pointers.
*/

static int	count_words(char const *s, char c)
{
	int		i;
	int		counter;
	int		flag;

	flag = 0;
	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (flag == 0)
			{
				flag = 1;
				counter ++;
			}
		}
		else
		{
			flag = 0;
		}
		i++;
	}
	return (counter);
}

static int	safe_malloc(char **lista, int position, unsigned int buffer)
{
	int	i;

	i = 0;
	lista[position] = malloc(buffer);
	if (lista[position] == NULL)
	{
		while (i < position)
		{
			free(lista[i++]);
		}
		free(lista);
		return (1);
	}
	return (0);
}

static char	complete(char **lista, char const *s, char c)
{
	unsigned int	len;
	int				i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
		{
			++s;
		}
		while (*s != c && *s)
		{
			++len;
			++s;
		}
		if (len)
		{
			if (safe_malloc(lista, i, len + 1))
				return (1);
		}
		ft_strlcpy(lista[i], s - len, len + 1);
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	n_words;
	char			**lista;

	n_words = 0;
	n_words = count_words(s, c);
	lista = malloc((n_words + 1) * sizeof(char *));
	if (lista == NULL || s == NULL)
		return (NULL);
	lista[n_words] = NULL;
	if (complete(lista, s, c))
		return (NULL);
	return (lista);
}
/*
int	main(void)
{
	char	*s = "   lorem   ipsum dolor     sit amet, consectetur\
   					adipiscing elit. Sed non risus. Suspendisse   ";
	char	**v = ft_split(s, ' ');
	while (*v)
		printf("%s\n", *v++);
	return (0);
}*/
