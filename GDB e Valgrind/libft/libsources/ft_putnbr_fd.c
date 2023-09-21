/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:01:10 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 15:49:43 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_min(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (0);
	}
	else
		return (1);
}

/*
*	Write a number n in the fd filedescriptor.
*
*	@param int	n: Number to be written;
*	@param int	fd: Filedescriptor to write to.
*/
void	ft_putnbr_fd(int n, int fd)
{
	char	num;

	num = 0;
	if (check_min(n, fd) == 0)
		return ;
	if (n >= 10)
	{
		num = n % 10 + '0';
		n = n / 10 ;
		ft_putnbr_fd(n, fd);
		write(fd, &num, 1);
	}
	else if (0 <= n && n <= 9)
	{
		n = n + '0';
		write(fd, &n, 1);
	}
	else if (n < 0)
	{
		n = n * (-1);
		write(fd, "-", 1);
		ft_putnbr_fd(n, fd);
	}
}
