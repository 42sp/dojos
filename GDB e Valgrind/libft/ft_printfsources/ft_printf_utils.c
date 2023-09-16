/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 23:30:35 by coder             #+#    #+#             */
/*   Updated: 2022/10/14 15:53:11 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libput.h"

int	print_pointer(unsigned long int p)
{
	int	print_len;

	print_len = 0;
	if (p == 0)
	{
		print_len += ft_putstr("(nil)");
		return (print_len);
	}
	print_len += ft_putstr("0x");
	print_len += ft_putnbr_hex(p, 'l');
	return (print_len);
}
