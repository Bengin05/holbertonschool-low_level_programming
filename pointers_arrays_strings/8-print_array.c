#include "main.h"
#include <stdio.h>

/**
 * print_array - Affiche n éléments d'un tableau d'entiers
 * suivis d'une nouvelle ligne.
 * @a: Pointeur vers le tableau d'entiers.
 * @n: Nombre d'éléments du tableau à afficher.
 *
 * Description: Cette fonction affiche les n premiers éléments
 * d'un tableau d'entiers séparés par une virgule et un espace.
 * Si n est inférieur ou égal à 0, la fonction affiche simplement
 * un retour à la ligne.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
