/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 21:30:25 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 17:46:50 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Locate a substring in a string, where no more than len characters are
*	searched.
*
*	@param const char	*haystack: The string to be searched;
*	@param const char	*needle: The substring to be searched for;
*	@param size_t	len: The maximum number of characters to search.
*
*	@return  A pointer to the first occurrence of the substring needle in the
*	string haystack, or NULL if the substring is not found.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*h;

	i = 0;
	h = (char *) haystack;
	if (!ft_strlen(needle))
		return (h);
	if (!len)
		return (0);
	while (i + ft_strlen(needle) <= len && h[i])
	{
		if (!ft_strncmp(&h[i], needle, ft_strlen(needle)))
			return (&h[i]);
		i++;
	}
	return (0);
}
