/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:43:14 by etachott          #+#    #+#             */
/*   Updated: 2023/03/16 16:18:31 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Allocate a string new joining strings s1 and s2.
*
*	@param char const	*s1: First string to be joined;
*	@param char const	*s2: Second string to be joined.
*
*	@return A pointer to the allocated area containing the joined string.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	l1;
	size_t	l2;
	size_t	i;
	size_t	j;

	i = 0;
	j = i;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	new = malloc(((l1 + l2) * sizeof(char)) + 1);
	while (l1--)
	{
		*(new + i) = *(s1 + i);
		i++;
	}
	while (l2--)
	{
		*(new + i) = *(s2 + j++);
		i++;
	}
	*(new + i) = '\0';
	return (new);
}
