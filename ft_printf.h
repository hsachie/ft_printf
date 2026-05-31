/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsachie <hsachie@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:41:29 by hsachie           #+#    #+#             */
/*   Updated: 2026/05/31 20:52:21 by hsachie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int     ft_printf(const char *format, ...);
void    ft_putchar(char c, int *count);
void    ft_putstr(char *s, int *count);
void    ft_putnbr(int n, int *count);
void    ft_putunsigned(unsigned int n, int *count);
void    ft_puthex(unsigned int n, int upper, int *count);
void    ft_puthex_ul(unsigned long n, int *count);
void    ft_putptr(unsigned long n, int *count);

#endif