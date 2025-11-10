#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatène deux chaînes de caractères
 * dans un nouvel espace mémoire
 * @s1: première chaîne de caractères
 * @s2: seconde chaîne de caractères
 *
 * Description: Si l’une des chaînes est NULL,
 * elle est traitée comme une chaîne vide.
 * Return: pointeur vers la nouvelle chaîne concaténée,
 *         ou NULL si l’allocation de mémoire échoue
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (i = 0; i < len2; i++)
		concat[len1 + i] = s2[i];

	concat[len1 + len2] = '\0';

	return (concat);
}
