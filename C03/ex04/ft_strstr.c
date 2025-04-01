/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:26:14 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/01/31 11:14:49 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!to_find || to_find[0] == '\0')
	{
		return (str);
	}
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[] = "all fiat worths nothing when compared with bitcoin";
	char find[] = "bitcoin";
	
		
	if (strstr(str, find) != NULL)
	//if (ft_strstr(str, find) != NULL)
	{
		printf("Sub-string encontrada");
	}
	else
		printf("sub-string nao encontrada");
	return (0);
}*/
