#include "main.h"

/**
 * _strspn - calcule la longueur du préfixe d'une chaîne
 *           composé uniquement de caractères présents dans accept
 * @s: chaîne à analyser
 * @accept: chaîne contenant les caractères autorisés
 *
 * Return: nombre d'octets consécutifs dans s qui sont uniquement dans accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int found;

	while (s[i] != '\0')
	{
		found = 0;


		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}

		if (!found)
			break;

		i++;
	}

	return i;
}
