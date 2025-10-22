#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
* main - Print function that checks for lowercase character
*
* Return: Always 0 (Success)
*/
int _islower(int c)
{
    char c = 'g';

    if (islower(c))
        _putchar("%c est une miniscule\n", c);
    else
        _putchar("%c n'est pas une minuscule\n", c);

    return 0;
    
}
