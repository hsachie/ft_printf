#include <stdio.h>
#include <unistd.h>

int	ft_putchar(char c)
{		
	return write(1, &c, 1);
}

int	main(void)
{
	char a = 'A';
	printf("%d\n", ft_putchar(a));
	return (0);
}