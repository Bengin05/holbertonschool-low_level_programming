#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string to measure
 *
 * Description: This function takes a pointer to a string and counts
 * the number of characters in it (excluding the null terminator '\0'),
 * then returns that length as an integer.
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
