#include "main.h"

/**
 * main - additionne les nombres positifs passés en arguments
 * @argc: nombre d'arguments
 * @argv: tableau des arguments
 *
 * Return: 0 si succès, 1 si erreur
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_digit(argv[i]))
		{
			char *msg = "Error\n";
			int j = 0;

			while (msg[j])
			{
				_putchar(msg[j]);
				j++;
			}
			return (1);
		}
		sum += _atoi(argv[i]);
	}

	print_number(sum);
	_putchar('\n');
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

	while (*s)
	{
		num = num * 10 + (*s - '0');
		s++;
	}

	return (num);
}

/**
 * is_digit - vérifie si une chaîne ne contient que des chiffres
 * @s: chaîne à vérifier
 *
 * Return: 1 si la chaîne est composée uniquement de chiffres, 0 sinon
 */
int is_digit(char *s)
{
	int i = 0;

	if (s[0] == '\0')
		return (0);

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}

	return (1);
}

/**
 * print_number - affiche un entier avec _putchar
 * @n: entier à afficher
 *
 * Return: rien
 */
void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
