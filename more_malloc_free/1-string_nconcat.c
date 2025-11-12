#include "main.h"
#include <stdlib.h>

#include <stdlib.h>

/**
 * string_nconcat - Concatène deux chaînes de caractères.
 * @s1: La première chaîne.
 * @s2: La deuxième chaîne.
 * @n: Le nombre d’octets de s2 à concaténer.
 *
 * Description :
 * Cette fonction alloue dynamiquement un nouvel espace mémoire contenant :
 * - Tous les caractères de s1
 * - Suivis des n premiers caractères de s2
 * - Et terminés par le caractère nul '\0'.
 *
 * Si s1 ou s2 vaut NULL, ils sont traités comme des chaînes vides.
 * Si l’allocation de mémoire échoue, la fonction renvoie NULL.
 *
 * Return: Un pointeur vers la nouvelle chaîne concaténée,
 *         ou NULL si l’allocation échoue.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
