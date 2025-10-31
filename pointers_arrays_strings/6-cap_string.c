#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be modified
 *
 * Description: Each word's first character is converted to uppercase
 * if it is a lowercase letter. Words are separated by the following
 * characters: space, tabulation, new line, ',', ';', '.', '!', '?',
 * '"', '(', ')', '{', and '}'.
 *
 * Return: Pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i = 0;
	char tab[] = " \t\n,;.!?/(){}";
	int j;

	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = str[0] - 32;
		}
		for (j = 0; tab[j] != '\0'; j++)
		{
			if (str[i] == tab[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}
