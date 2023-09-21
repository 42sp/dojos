/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:01:16 by coder             #+#    #+#             */
/*   Updated: 2022/10/04 18:34:08 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libput.h"

int	ft_putnbr(long long n)
{
	char	num;
	int		len;

	num = 0;
	len = 0;
	if (n >= 10)
	{
		num = n % 10 + '0';
		n /= 10;
		len += ft_putnbr(n);
		len += write(1, &num, 1);
	}
	else if (0 <= n && n <= 9)
	{
		n += '0';
		len += write(1, &n, 1);
	}
	else if (n < 0)
	{
		n *= (-1);
		len += write(1, "-", 1);
		len += ft_putnbr(n);
	}
	return (len);
}
