#include "main.h"

/**
 * print_triangle - prints a triangle using the character '#'
 * @size: the size of the triangle
 *
 * Description: This function prints a right-aligned triangle where the
 * number of lines and the number of '#' characters increase with 'size'.
 * If size is 0 or less, only a new line is printed.
 *
 * Return: void
 */
 void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
