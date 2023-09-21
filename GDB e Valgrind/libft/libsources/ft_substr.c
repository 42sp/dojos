/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:22:03 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 17:58:46 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Allocates and returns a substring from the given string.
*
*	@param s The string to extract the substring from.
*	@param start The starting index of the substring in the string.
*	@param len The maximum length of the substring.
*
*	@return The newly allocated substring, or NULL if the allocation fails.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	if (start > ft_strlen(s))
		start = ft_strlen(s);
	k = start;
	while (len && s[k++])
	{
		i++;
		len--;
	}
	sub = malloc(sizeof(char) * i + 1);
	while (j < i)
		*(sub + j++) = *(s + start++);
	*(sub + i) = '\0';
	return (sub);
}
