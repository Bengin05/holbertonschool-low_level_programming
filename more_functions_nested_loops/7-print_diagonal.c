#include "main.h"

/**
 * print_line - draws a draws line
 * @n: number of times the character '\' should be printed
 *
 * Return: void
 */
 void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
