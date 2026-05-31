/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsachie <hsachie@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 19:50:12 by hsachie           #+#    #+#             */
/*   Updated: 2026/05/31 20:52:34 by hsachie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *count)
{
	if (*count == -1)
		return ;
	if (write(1, &c, 1) == -1)
		*count = -1;
	else
		*count += 1;
}

void	ft_putnbr(int n, int *count)
{
	unsigned int	nb;

	if (*count == -1)
		return ;
	if (n < 0)
	{
		ft_putchar('-', count);
		nb = (unsigned int)-n;
	}
	else
		nb = (unsigned int)n;
	if (nb >= 10)
		ft_putnbr((int)(nb / 10), count);
	if (*count == -1)
		return ;
	ft_putchar((nb % 10) + '0', count);
}

void	ft_putstr(char *s, int *count)
{
	int	i;

	if (*count == -1)
		return ;
	if (!s)
	{
		ft_putstr("(null)", count);
		return ;
	}
	i = 0;
	while (s[i])
	{
		if (write(1, &s[i], 1) == -1)
		{
			*count = -1;
			return ;
		}
		*count = *count + 1;
		i++;
	}
}

void	ft_putunsigned(unsigned int n, int *count)
{
	if (*count == -1)
		return ;
	if (n >= 10)
		ft_putunsigned(n / 10, count);
	if (*count == -1)
		return ;
	ft_putchar(n % 10 + '0', count);
}

void	ft_puthex(unsigned int n, int upper, int *count)
{
	char *base;

	if (*count == -1)
		return ;
	if (upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		ft_puthex(n / 16, upper, count);
	if (*count == -1)
		return ;
	ft_putchar(base[n % 16], count);
}