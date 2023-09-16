/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:47:16 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 12:50:06 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Calloc allocates count * size bytes in memory and set it to 0.
*
*	@param size_t	count: Quantity of elements.
*	@param size_t	size: Size of each element.
*
*	@return Pointer to allocated memory block.
*/
void	*ft_calloc(size_t count, size_t size)
{
	size_t			index;
	unsigned char	*ptr;

	index = 0;
	if (!size || !count)
		return (malloc(0));
	if (size > 2147483647 / count)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	while (index < size * count)
		ptr[index++] = '\0';
	return (ptr);
}
