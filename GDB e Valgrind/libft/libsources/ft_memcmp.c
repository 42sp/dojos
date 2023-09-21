/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:58:08 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 15:16:06 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Compare two blocks of memory.
*
*	@param void	*s1: A pointer to the first block of memory
*	@param void	*s2: A pointer to the second block of memory
*	@param size_t	n: the number of bytes to compare
*
*	@return	If the two memory blocks are equal, return 0. Else, return the
*	difference between the two blocks.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				index;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	index = 0;
	ptr1 = s1;
	ptr2 = s2;
	while (index < n)
	{
		if (ptr1[index] != ptr2[index])
			return (ptr1[index] - ptr2[index]);
		else
			index++;
	}
	return (0);
}
