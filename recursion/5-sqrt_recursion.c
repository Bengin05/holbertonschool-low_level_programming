#include "main.h"

/**
 * _sqrt_helper - fonction récursive qui cherche la racine carrée naturelle
 * @n: nombre dont on cherche la racine
 * @i: valeur testée comme racine potentielle
 * Return: la racine carrée naturelle, ou -1 si elle n'existe pas
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
