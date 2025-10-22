#include <stdio.h>
#include "main.h"

/**
* times_table - Prints the 9 times table, starting from 0
*/
void times_table(void n)
{
    int i;

    for (i = 0; i <= 9; i++)
    {
        putnbr(i);
        putchar_custom(' ');
        putchar_custom('x');
        putchar_custom(' ');
        putnbr(9);
        putchar_custom(' ');
        putchar_custom('=');
        putchar_custom(' ');
        putnbr(i * 9);
        putchar_custom('\n');
    }
}
