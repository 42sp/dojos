/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:09:35 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 17:27:59 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Copies up to size - 1 characters from the NULL-terminated string src to
*	dst, NULL-terminating the result.
*
*	@param char	*dst: Pointer to the destination string;
*	@param char	*src: Pointer to the source string;
*	@param size_t	size: Quantity of bytes to be copied.
*
*	@return Length of the string they tried to create.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	nonull;
	size_t	ret;

	nonull = size - 1;
	ret = ft_strlen(src);
	if (size)
	{
		while (nonull-- && *src)
		{
			*dst = (char) *src;
			dst++;
			src++;
		}
		*dst = '\0';
	}
	return (ret);
}
