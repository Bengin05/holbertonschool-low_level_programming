#include "main.h"

/**
 * print_number - affiche un entier positif ou nul avec _putchar
 * @n: nombre à afficher
 *
 * Return: rien
 */
void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}

/**
 * main - affiche le nombre d’arguments passés au programme
 * @argc: nombre d’arguments
 * @argv: tableau des arguments
 *
 * Return: 0 (succès)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	print_number(argc - 1);
	_putchar('\n');

	return (0);
}
