#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Alloue une grille à deux dimensions d'entiers
 * @width: nombre de colonnes de la grille
 * @height: nombre de lignes de la grille
 *
 * Description: Crée une grille de dimensions données et initialise
 * chaque élément à 0. Si width ou height est 0 ou négatif,
 * ou si l'allocation échoue, renvoie NULL.
 *
 * Return: pointeur vers la grille allouée ou NULL en cas d'échec
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
