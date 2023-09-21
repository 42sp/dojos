/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:11:17 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 18:03:20 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Converts an uppercase letter to lowercase.
*
*	@param int	c: The character to convert.
*
*	@return The lowercase version of the input character if it is an uppercase
*	letter, or the input character otherwise.
*/
int	ft_tolower(int c)
{
	if (65 <= c && c <= 90)
		return (c + 32);
	else
		return (c);
}
