#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Description:
 * This function replaces specific letters with numbers to form
 * the "1337" encoding style:
 *  - a and A are replaced by 4
 *  - e and E are replaced by 3
 *  - o and O are replaced by 0
 *  - t and T are replaced by 7
 *  - l and L are replaced by 1
 *
 * Return: pointer to the modified string
 *
 * Note:
 * Only one if statement and two loops are allowed.
 * No use of case-selection statements.
 * No ternary operations.
 */
char *leet(char *str)
{
	int i = 0, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (str[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
