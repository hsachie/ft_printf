/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsachie <hsachie@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 18:31:43 by hsachie           #+#    #+#             */
/*   Updated: 2026/06/24 19:37:29 by hsachie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_ul(unsigned long n, int *count)
{
	char	*base;

	if (*count == -1)
		return ;
	base = "0123456789abcdef";
	if (n >= 16)
		ft_puthex_ul(n / 16, count);
	if (*count == -1)
		return ;
	ft_putchar(base[n % 16], count);
}

void	ft_putptr(unsigned long n, int *count)
{
	if (*count == -1)
		return ;
	if (n == 0)
	{
		ft_putstr("(nil)", count);
		return ;
	}
	ft_putstr("0x", count);
	ft_puthex_ul(n, count);
}
