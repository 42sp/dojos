/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 23:19:52 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 12:26:41 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Bzero sets the first n bytes of the block of memory pointed to
*	by s to zero. Useful for initializing structs.
*
*	@param void	*s: Pointer to memory block.
*	@param size_t	n: Number of bytes to be zeroed
*/
void	ft_bzero(void *s, size_t n)
{
	unsigned int	index;
	unsigned char	*block_pointer;

	block_pointer = s;
	index = 0;
	while (index < n)
	{
		block_pointer[index] = '\0';
		index++;
	}
}
