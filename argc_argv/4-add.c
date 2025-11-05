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
	int num1, num2, result;

	if (argc != 3)
	{
		char *msg = "Error\n";
		int i = 0;

		while (msg[i])
		{
			_putchar(msg[i]);
			i++;
		}
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 + num2;

	print_number(result);
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
	int sign = 1, num = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while (*s)
	{
		num = num * 10 + (*s - '0');
		s++;
	}

	return (num * sign);
}

/**
 * is_digit - vérifie si une chaîne ne contient que des chiffres
 * @s: chaîne à vérifier
 *
 * Return: 1 si la chaîne est composée uniquement de chiffres, 0 sinon
 */
int is_digit(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}

	if (*s < '0' || *s > '9')
	{
		return (0);
	}

	return (is_digit(s + 1));
}

/**
 * print_number - affiche un entier avec _putchar
 * @n: entier à afficher
 *
 * Return: rien
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
