#include "main.h"
#include <stdlib.h>

#include <stdlib.h>

/**
 * _calloc - Alloue de la mémoire pour un tableau et initialise à zéro.
 * @nmemb: Nombre d’éléments du tableau.
 * @size: Taille en octets de chaque élément.
 *
 * Description :
 * Cette fonction alloue dynamiquement un espace mémoire pour un tableau
 * contenant `nmemb` éléments de `size` octets chacun.
 * La mémoire allouée est initialisée à zéro.
 *
 * Si `nmemb` ou `size` vaut 0, la fonction retourne NULL.
 * Si l’allocation échoue (malloc retourne NULL),
 * La fonction retourne aussi NULL.
 *
 * Return: Un pointeur vers la mémoire allouée et initialisée,
 *         ou NULL si une erreur survient.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
