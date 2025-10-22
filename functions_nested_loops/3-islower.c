#include <stdio.h>
#include "main.h"

/**
* _islower - Cheks if a character is lowercase
*@c: The character to test
*
* Return: 1 if lowercase, 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
