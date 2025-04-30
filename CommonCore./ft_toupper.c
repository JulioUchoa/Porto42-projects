/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcezar-l <jcezar-l@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 20:37:30 by jcezar-l          #+#    #+#             */
/*   Updated: 2025/04/22 16:11:44 by jcezar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* it converts the given character to uppercase, if its a lowercase char
if its not a letter, it will just return the given symbol.

I`ve had trouble understanding/remembering 
that in order to change the char content,
i needed to deal with Pointers, and that it
should not return an INT but rather an *char 
*/
int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
	{
		c -= 32;
	}
	return (c);
}
