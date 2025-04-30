/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:29:49 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/26 19:20:45 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	this function takes an integer and returns a string of characters
	types corresponding to those integers. note: it must be malloced	
*/

static int	digit_count(int n)
{
	int	digit;

	digit = 0;
	if (n <= 0)
		digit = 1;
	while (n)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

static void	converter(int n, char *result, int *cursor)
{
	if (n == -2147483648)
	{
		result[*cursor] = '-';
		(*cursor)++;
		result[*cursor] = '2';
		(*cursor)++;
		converter(147483648, result, cursor);
	}
	else if (n < 0)
	{
		result[*cursor] = '-';
		(*cursor)++;
		n = -n;
		converter(n, result, cursor);
	}
	else if (n > 9)
	{
		converter(n / 10, result, cursor);
		result[*cursor] = (n % 10) + '0';
		(*cursor)++;
	}
	else
	{
		result[(*cursor)++] = n + 48;
	}
}

char	*ft_itoa(int n)
{
	int		cursor;
	char	*result;

	result = malloc(digit_count(n) + 1);
	if (result == NULL)
		return (NULL);
	cursor = 0;
	converter(n, result, &cursor);
	result[cursor] = '\0';
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%s\n", ft_itoa(12345));
	printf("%s\n", ft_itoa(-12345));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}*/
