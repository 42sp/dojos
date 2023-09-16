/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:38:43 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 16:00:20 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_word_quantity(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*(s + j))
	{
		if (*(s + j) != c)
			i++;
		while (*(s + j) != c && *(s + j))
			j++;
		while (*(s + j) == c && *(s + j))
			j++;
	}
	return (i);
}

static size_t	get_word_length(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

/*
*	Split a string s in a matrix of strings using character c as delimiter.
*
*	@param char const	*s: The string to be split;
*	@param char	c: The caracter used as delimiter.
*
*	@return char	**matrix: Matrix containing the splitted string.
*	Each element of the matrix is a string.
*/
char	**ft_split(char const *s, char c)
{
	size_t	word_quantity;
	size_t	index;
	char	**matrix;

	index = 0;
	word_quantity = get_word_quantity(s, c);
	matrix = (char **) ft_calloc(word_quantity + 1, sizeof(char *));
	while (*s)
	{
		if (*s != c)
		{
			matrix[index] = ft_substr(s, 0, get_word_length(s, c));
			s++;
			index++;
		}
		while (*s != c && *s)
			s++;
		while (*s == c && *s)
			s++;
	}
	return (matrix);
}
