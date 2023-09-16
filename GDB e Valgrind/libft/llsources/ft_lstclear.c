/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <etachott@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 06:59:54 by etachott          #+#    #+#             */
/*   Updated: 2022/11/13 07:34:11 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*prev_node;

	prev_node = *lst;
	if (del)
	{
		while (*lst && prev_node)
		{
			prev_node = *lst;
			*lst = (*lst)->next;
			del(prev_node->content);
			free(prev_node);
		}
		lst = NULL;
	}
}
