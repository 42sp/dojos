/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:42:24 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 14:44:43 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Return a non-zero value if c is an alphanumeric character.
*
*	@param int	c: The integer value to check.
*
*	@return If the character is alphanumeric return a non-zero value
*	else, return 0.
*/
int	ft_isalnum(int c)
{
	if (('A' <= c && c <= 'Z')
		|| ('a' <= c && c <= 'z')
		|| ('0' <= c && c <= '9'))
		return (8);
	return (0);
}
