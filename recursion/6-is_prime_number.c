#include "main.h"

/**
 * _is_prime_helper - vérifie récursivement si n a un diviseur
 * @n: le nombre à tester
 * @i: le diviseur courant testé
 *
 * Return: 1 si n est premier, 0 sinon
 */
int _is_prime_helper(int n, int i)
{
	if (i >= n)
		return (1);
	if (n % i == 0)
		return (0);
	return _is_prime_helper(n, i + 1);
}

/**
 * is_prime_number - vérifie si un nombre est premier
 * @n: l'entier à vérifier
 *
 * Return: 1 si n est premier, 0 sinon
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_is_prime_helper(n, 2));
}
