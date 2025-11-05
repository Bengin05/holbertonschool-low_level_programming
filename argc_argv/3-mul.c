#include "main.h"

/**
 * main - multiplie deux nombres passés en arguments
 * @argc: nombre d’arguments
 * @argv: tableau des arguments
 *
 * Return: 0 si succès, 1 si erreur
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		return (1);
	}
	return (0);
}

/**
 * _atoi - convertit une chaîne de chiffres en entier
 * @s: chaîne à convertir
 *
 * Return: entier correspondant
 */
int _atoi(char *s)
{
	int num = 0;
	int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	if (*s == '\0')
		return (0);

	num = (*s - '0') + _atoi(s + 1) * 10;
	return (num * sign / 10);
}
