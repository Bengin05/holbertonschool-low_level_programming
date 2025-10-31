#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * This function appends the string pointed to by @src to the end of
 * the string pointed to by @dest, overwriting the terminating null byte
 * ('\0') at the end of @dest, and then adds a terminating null byte.
 *
 * Return: pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
		int i = 0;
		int j = 0;

	while (dest[i] != '\0')
	i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
