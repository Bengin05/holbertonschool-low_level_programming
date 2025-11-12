#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Alloue de la mémoire en utilisant malloc
 * @b: la taille en octets à allouer
 *
 * Description :
 * Cette fonction tente d'allouer un bloc de mémoire de taille 'b' octets
 * en utilisant malloc. Si l'allocation échoue (malloc renvoie NULL),
 * le programme se termine immédiatement avec le code d’état 98.
 *
 * Return: un pointeur vers la mémoire allouée si le succès,
 *         ne retourne rien si l’allocation échoue (le programme quitte).
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
