#include <stdio.h>
#include "main.h"

/**
*
*/
void times_table(void)
{
    int n, i;

    _putchar(" i = '9' :\n");
    scanf("'%d'", &n);

    _putchar("\n '%d:'\n", n);

    for (i = 1; i <= 10; i++)
        _putchar("%d x %d = %d\n", n, i, n * i);

    return 0;
}
