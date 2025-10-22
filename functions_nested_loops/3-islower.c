#include <stdio.h>
#include "main.h"

/**
* main - Test the _islower function
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
