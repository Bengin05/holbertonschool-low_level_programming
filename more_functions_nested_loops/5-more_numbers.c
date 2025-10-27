#include "main.h"

/**
* more_numbers - Write a function that prints 10 times the numbers,
*                from 0 to 14, followed by a new line.
*
*
* Return: Always 0 (success)
*/
void more_numbers(void)
{
	int n, m;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
