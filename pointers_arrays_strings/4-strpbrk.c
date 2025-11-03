#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - recherche le premier caractère d'une chaîne
 *            qui correspond à n'importe quel caractère d'une autre chaîne
 * @s: chaîne à analyser
 * @accept: chaîne contenant les caractères à rechercher
 *
 * Return: pointeur vers le premier caractère de s trouvé dans accept,
 *         ou NULL si aucun caractère n'est trouvé
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++) 
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return &s[i];
		}
	}

	return NULL;
}
