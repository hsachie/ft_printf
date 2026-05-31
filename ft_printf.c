/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsachie <hsachie@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:35:14 by hsachie           #+#    #+#             */
/*   Updated: 2026/05/31 21:00:23 by hsachie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void handle_format(char c, va_list ap, int *count)
{
	if (c == 'c')
        ft_putchar(va_arg(ap, int), count);
    else if (c == 's')
        ft_putstr(va_arg(ap, char *), count);
    else if (c == 'd' || c == 'i')
        ft_putnbr(va_arg(ap, int), count);
    else if (c == 'u')
        ft_putunsigned(va_arg(ap, unsigned int), count);
    else if (c == 'x')
        ft_puthex(va_arg(ap, unsigned int), 0, count);
    else if (c == 'X')
        ft_puthex(va_arg(ap, unsigned int), 1, count);
    else if (c == 'p')
        ft_putptr(va_arg(ap, unsigned long), count);
    else if (c == '%')
        ft_putchar('%', count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			handle_format(format[i], ap, &count);
		}
		else
			ft_putchar(format[i], &count);
		i++;
		
	}
	va_end(ap);
	return (count);
}