#include "main.h"

/**
 * _pow_recursion - calcule la puissance d'un entier
 * @x: entier de base
 * @y: exposant
 *
 * Cette fonction utilise la récursion pour calculer x^y.
 * - Si y est inférieur à 0, la fonction retourne -1 pour indiquer une erreur.
 * - Si y est égal à 0, la fonction retourne 1 (cas de base).
 *
 * Return: x élevé à la puissance y, ou -1 si y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return(-1);
	}
	else if (y == 0)
	{
		return(1);
	}
	else
	{
		return x * _pow_recursion(x, y - 1);
	}
}
