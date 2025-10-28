#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string to be printed
 *
 * Description: This function prints one character out of two
 * of a string, starting with the first character.
 * It uses the _putchar function to print each character,
 * and ends with a newline.
 *
 * Return: Nothing (void)
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
