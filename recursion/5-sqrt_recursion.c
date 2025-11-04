#include "main.h"

/**
 * _sqrt_recursion - retourne la racine carrée naturelle d’un nombre
 * @n: entier dont on veut la racine carrée
 * Return: la racine carrée naturelle de n, ou -1 si elle n’existe pas
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - fonction auxiliaire récursive pour trouver la racine carrée
 * @n: nombre dont on cherche la racine carrée
 * @i: nombre testé comme racine possible
 *
 * Cette fonction teste successivement les valeurs de i (1, 2, 3, …)
 * jusqu’à ce que i * i == n (racine trouvée) ou que i * i > n (pas de racine).
 *
 * Return: la racine carrée naturelle de n, ou -1 si elle n'existe pas
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt_helper(n, i + 1));
}
