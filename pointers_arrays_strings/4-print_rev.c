#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string to be printed in reverse
 *
 * Description: This function takes a string as input and prints
 * its characters in reverse order using the _putchar function.
 * After printing all characters, it prints a newline.
 *
 * Return: Nothing (void)
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
