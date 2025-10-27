#include "main.h"

/**
 * print_square - prints a square using the character '#'
 * @size: the size of the square
 *
 * Description: This function prints a square with the character '#'.
 * The square has both width and height equal to 'size'.
 * If size is 0 or less, only a new line is printed.
 *
 * Return: void
 */
 void print_square(int size)
 {
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
 }