/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:31:29 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 14:07:08 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Return a non-zero value if c is a digit.
*
*	@param int	c: The integer value to check.
*
*	@return If the character is a digit return a non-zero value
*	else, return 0.
*/
int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (2048);
	else
		return (0);
}
