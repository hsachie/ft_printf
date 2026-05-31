#include "ft_printf.h"

int main(void)
{
    ft_printf("char: %c\n", 'A');
    ft_printf("string: %s\n", "hello");
    ft_printf("int: %d\n", 42);
    ft_printf("negative: %d\n", -42);
    ft_printf("hex: %x\n", 255);
    ft_printf("HEX: %X\n", 255);
    ft_printf("percent: 100%%\n");
    return (0);
}
