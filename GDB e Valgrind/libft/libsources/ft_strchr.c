/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:14:57 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 16:08:12 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Check if the character c is insed the string s.
*
*	@param const char	*s: The string to be searchead;
*	@param int	c: The character to look for.
*
*	@return If the chracter is found, return a pointer to its position. Else,
*	return 0.
*/
char	*ft_strchr(const char *s, int c)
{
	int		index;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == (char) c)
			return ((char *)s + index);
		index++;
	}
	return ((char *)s + index);
}
