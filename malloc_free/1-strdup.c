#include "main.h"
#include <stdlib.h>

/**
 * _strdup - retourne un pointeur vers un nouvel espace mémoire alloué
 *            contenant une copie de la chaîne donnée en paramètre
 * @str: la chaîne de caractères à dupliquer
 *
 * Return: pointeur vers la nouvelle chaîne dupliquée,
 *         ou NULL si str est NULL ou si l’allocation échoue
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[i] = '\0';
	return (dup);

}
