#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - crée une grille 2D d'entiers initialisée à 0
 * @width: largeur de la grille
 * @height: hauteur de la grille
 *
 * Description: La fonction alloue dynamiquement une grille 2D
 *				(tableau de tableaux d'entiers),
 *              chaque élément étant initialisé à 0.
 *				Si la largeur ou la hauteur est
 *              nulle ou négative, la fonction retourne NULL.
 *				Si l'allocation échoue,
 *              elle retourne également NULL.
 *
 * Return: pointeur vers la grille 2D nouvellement allouée,
 *		   ou NULL en cas d'erreur
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
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
