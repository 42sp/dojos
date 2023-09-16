/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libput.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:51:37 by coder             #+#    #+#             */
/*   Updated: 2022/10/14 15:51:33 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPUT_H
# define LIBPUT_H

# include <unistd.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(long long n);
int		ft_putnbr_hex(unsigned long long n, char option);
#endif
