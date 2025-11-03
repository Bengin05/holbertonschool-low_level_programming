#include "main.h"
#include <stddef.h>

/**
 * _strstr - localise la première occurrence de la sous-chaîne 'needle'
 *            dans la chaîne 'haystack'
 * @haystack: la chaîne dans laquelle effectuer la recherche
 * @needle: la sous-chaîne à rechercher
 *
 * Description: Cette fonction recherche la première occurrence de la
 *              sous-chaîne 'needle' dans la chaîne 'haystack'. La
 *              comparaison n'inclut pas les caractères nuls terminaux
 *              ('\0').
 *
 * Return: un pointeur vers le début de la sous-chaîne trouvée dans
 *         'haystack', ou NULL si 'needle' n'est pas trouvée.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
		return (&haystack[i]);
	}

	return (NULL);
}
