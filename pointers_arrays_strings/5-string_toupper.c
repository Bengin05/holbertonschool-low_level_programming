#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to the string to modify
 *
 * This function converts all lowercase alphabetic characters in the string
 * pointed to by @str to their uppercase equivalents. Non-alphabetic
 * characters remain unchanged.
 *
 * Return: pointer to the resulting string @str
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	
	{
		if (str[i] >= 'a' && str[i] <='z')
	{
		str[i] = str[i] - 32;
		i++;
	}
	}
	return str;
}
