#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Libère une grille à deux dimensions précédemment allouée
 * @grid: pointeur vers la grille à libérer
 * @height: nombre de lignes de la grille
 *
 * Description: Cette fonction libère la mémoire allouée pour chaque
 * ligne du tableau, puis libère le tableau principal afin d’éviter
 * toute fuite de mémoire.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
