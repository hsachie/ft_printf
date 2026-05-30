/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsachie <hsachie@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 19:50:12 by hsachie           #+#    #+#             */
/*   Updated: 2026/05/28 12:23:46 by hsachie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c, int *count)
{		
	write(1, &c, 1);
	*count = *count +1;
}

void ft_putnbr(int n, int *count)
{
	write (1, n, 1);
	*count = *count +1
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}




