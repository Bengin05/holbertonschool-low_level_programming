#include "main.h"
#include <stdlib.h>

/**
 * array_range - Crée un tableau d'entiers contenant une plage de valeurs.
 * @min: La valeur minimale (incluse).
 * @max: La valeur maximale (incluse).
 *
 * Description :
 * Cette fonction alloue dynamiquement un tableau d'entiers contenant
 * toutes les valeurs de `min` à `max` incluses, dans l'ordre croissant.
 *
 * Si `min` est supérieur à `max`, la fonction retourne NULL.
 * Si l'allocation mémoire échoue, la fonction retourne NULL.
 *
 * Return: Un pointeur vers le tableau nouvellement créé,
 *         ou NULL si une erreur survient.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
