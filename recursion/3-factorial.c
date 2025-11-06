#include "main.h"

/**
 * factorial - calcule la factorielle d'un nombre entier
 * @n: entier dont on veut calculer la factorielle
 *
 * Cette fonction utilise la récursion pour calculer n! (n factorielle).
 * - Si n est inférieur à 0, la fonction retourne -1 pour indiquer une erreur
 * - La factorielle de 0 est définie comme 1.
 *
 * Return: la factorielle de n, ou -1 si n < 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
		return (n * factorial(n - 1));
}
