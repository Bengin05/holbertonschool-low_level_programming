#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Affiche l'échiquier.
 * @a: Tableau à deux dimensions représentant l'échiquier (8x8).
 *
 * Return: Rien.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
