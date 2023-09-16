/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:01:16 by coder             #+#    #+#             */
/*   Updated: 2022/10/14 15:54:49 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libput.h"
#define HEX_LOWER "0123456789abcdef"
#define HEX_UPPER "0123456789ABCDEF"

static int	last_write(int n, char option)
{
	int	sub_print_len;

	sub_print_len = 0;
	if (0 <= n && n <= 9)
	{
		n += '0';
		sub_print_len += write(1, &n, 1);
	}
	else if (n >= 10 && option == 'l')
	{
		n += 'W';
		sub_print_len += write(1, &n, 1);
	}
	else if (n >= 10 && option == 'u')
	{
		n += '7';
		sub_print_len += write(1, &n, 1);
	}
	return (sub_print_len);
}

int	ft_putnbr_hex(unsigned long long n, char option)
{
	char	num;
	int		print_len;

	num = 0;
	print_len = 0;
	if (n >= 16)
	{
		if (option == 'l')
			num = HEX_LOWER[n % 16];
		else if (option == 'u')
			num = HEX_UPPER[n % 16];
		n /= 16;
		print_len += ft_putnbr_hex(n, option);
		print_len += write(1, &num, 1);
	}
	else if (n <= 16)
		print_len += last_write(n, option);
	return (print_len);
}
