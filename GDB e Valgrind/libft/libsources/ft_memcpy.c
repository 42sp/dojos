/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:33:09 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 15:24:07 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Copies src block of memory to dest. Doesn't treat overlap.
*
*	@param void	*dest: Pointer to the block of memory to copy to;
*	@param const void	*src: Pointer to the block of memory to copy from;
*	@param size_t	n: The number of bytes to copy.
*
*	@return Pointer to the destination block.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*dest_copy;

	dest_copy = dest;
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (dest_copy);
}
