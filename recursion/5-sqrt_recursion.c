#include "main.h"

/**
 * _sqrt_recursion - calcule la racine carrée naturelle d'un entier
 * @n: entier dont on veut la racine carrée
 *
 * Cette fonction utilise la récursion pour trouver la racine carrée naturelle de n.
 * - Si n n'a pas de racine carrée naturelle, la fonction retourne -1.
 * - Si n est 0 ou 1, la racine carrée est n elle-même.
 *
 * Return: la racine carrée naturelle de n, ou -1 si elle n'existe pas
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return(-1);
	}
	else if (n == 0 || n == 1)
	{
	   return(n); 
	}
	else
	{
		return(_sqrt_helper(n, 1));
	}
}
