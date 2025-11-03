#include "main.h"
#include <stddef.h>

/**
 * _strchr - localise un caractère dans une chaîne de caractères
 * @s: pointeur vers la chaîne à analyser
 * @c: caractère à rechercher
 *
 * Return: pointeur vers la première occurrence de c dans s,
 *         ou NULL si le caractère n’est pas trouvé
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
			return (p);
		p++;
	}

	if (*p == c)
		return (p);

	return (NULL);
}
