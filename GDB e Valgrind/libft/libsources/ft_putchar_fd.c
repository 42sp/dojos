/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:54:18 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 15:42:12 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Write a char c in the fd filedescriptor.
*
*	@param char	c: Character to write;
*	@param int	fd: Filedescriptor to write to.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
