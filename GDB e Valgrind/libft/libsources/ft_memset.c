/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:03:49 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 15:40:03 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Fills n bytes of a block of memory s with a value c.
*
*	@param void	*s: Pointer to the memory block to fill;
*	@param int	c: The value to be set;
*	@param int	n: The number of bytes to fill.
*
*	@return Pointer to the memory block.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	index;
	unsigned char	*ptr;

	ptr = s;
	index = 0;
	while (index < n)
	{
		ptr[index] = c;
		index++;
	}
	return (s);
}
