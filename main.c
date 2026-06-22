#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    // 文字
    ft_printf("char: %c\n", 'A');

    // 文字列
    ft_printf("string: %s\n", "hello");

    // 数字
    ft_printf("int: %d\n", 42);
    ft_printf("int: %i\n", -42);

    // 符号なし
    ft_printf("unsigned: %u\n", 100);

    // 16進数
    ft_printf("hex lower: %x\n", 255);
    ft_printf("hex upper: %X\n", 255);

    // ポインタ
    int n = 42;
    ft_printf("pointer: %p\n", &n);

    // パーセント
    ft_printf("percent: 100%%\n");

    return (0);
}