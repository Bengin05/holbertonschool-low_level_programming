#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 89)
	{
		int first = i / 10;
		int second = i % 10;

		if (first < second)
		{
			putchar(first + '0');
			putchar(second + '0');
			if (!(first == 8 && second == 9))
			{
				putchar(','); && putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
