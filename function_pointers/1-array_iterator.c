#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - Exécute une fonction sur chaque élément d'un tableau
 * @array: Le tableau d'entiers
 * @size: La taille du tableau
 * @action: Pointeur vers la fonction à appliquer à chaque élément
 *
 * Description: Cette fonction parcourt le tableau et, pour chaque élément,
 * appelle la fonction pointée par action. Si array ou action sont NULL,
 * la fonction ne fait rien.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
