#include "function_pointers.h"

/**
 * int_index - Cherche un entier dans un tableau selon une fonction comparaison
 * @array: Le tableau d'entiers
 * @size: Le nombre d'éléments dans le tableau
 * @cmp: Pointeur vers la fonction utilisée pour comparer les valeurs
 *
 * Description: Cette fonction parcourt le tableau et applique la
 * fonction pointée par cmp à chaque élément. Elle retourne l'indice
 * du premier élément pour lequel cmp ne renvoie pas 0. Si aucun
 * élément ne correspond, ou si size <= 0, la fonction retourne -1.
 *
 * Return: L'indice du premier élément correspondant, ou -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
