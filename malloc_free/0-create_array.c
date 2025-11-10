#include "main.h"
#include <stdlib.h>

/**
 * create_array - crée un tableau de caractères et l'initialise
 * avec un caractère spécifique
 * @size: la taille du tableau à créer
 * @c: le caractère utilisé pour initialiser le tableau
 *
 * Return: pointeur vers le tableau, ou NULL si échec ou si size vaut 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
