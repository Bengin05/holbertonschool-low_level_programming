#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * This function compares the string pointed to by @s1 with the string
 * pointed to by @s2. It returns an integer less than, equal to, or greater
 * than zero if @s1 is found, respectively, to be less than, to match, or
 * be greater than @s2. The comparison is done using unsigned characters.
 *
 * Return: an integer indicating the result of the comparison
 */
int _strcmp(char *s1, char *s2);
{
		int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] > s2[j])
	{
		return (s1[i] - s2[i]);
	}
	else if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s2[i] - s1[i]);
	}
	
}
