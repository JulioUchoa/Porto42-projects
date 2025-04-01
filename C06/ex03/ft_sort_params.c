/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 15:07:52 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/02/04 16:05:36 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	putstring_(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
}

int	strcmp_(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	strsort(char **s1, char **s2)
{
	char	*tempstring;

	tempstring = *s1;
	*s1 = *s2;
	*s2 = tempstring;
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (strcmp_(argv[i], argv[j]) > 0)
			{
				strsort(&argv[i], &argv[j]);
			}
			j++;
		}
		i++;
	}
	j = 1;
	while (j < argc)
	{
		putstring_(argv[j]);
		write(1, "\n", 1);
		j++;
	}
}
