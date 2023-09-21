/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:18:56 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 17:51:17 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Locate the last occurence of a character in a string.
*
*	@param char	*s: The string to search;
*	@param int	c: The character to search for.
*
*	@return If the character is found, a pointer to the character in the
*	string. If the character is not found, returns NULL.
*/
char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len)
	{
		if (s[len] == (char) c)
			return ((char *)s + len);
		len--;
	}
	if (s[len] == (char) c)
		return ((char *)s + len);
	return (0);
}
