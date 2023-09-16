/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:22:39 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 16:02:06 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Searches for a character in a block of memory.
*
*	@param void	*s: Pointer to the block of memory;
*	@param int	c: The character to search for;
*	@param size_t	n: The number of bytes to search in the block.
*
*	@return If c is found in the memory block, return a pointer to it. Else,
*	return NULL.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr = s;

	c = (unsigned char) c;
	while (n--)
	{
		if (*ptr == c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
