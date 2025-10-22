#include <stdio.h>
include "main.h"

/**
* print_alphabet -  Prints 10 times the alphabet, in lowercase, followed by a new line
*
* Return: void
*/
void print_alphabet_x10(void)
{
    char c;

    for (c = 'a'; c <= 10; c++)
        _putchar(c);
    _putchar('\n');
}
