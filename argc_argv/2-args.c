#include "main.h"

/**
 * print_string - affiche une chaîne de caractères avec _putchar
 * @s: chaîne à afficher
 *
 * Return: rien
 */
void print_string(char *s)
{
	if (*s == '\0')
		return;

	_putchar(*s);
	print_string(s + 1);
}

/**
 * print_arguments - affiche tous les arguments récursivement
 * @argc: nombre d'arguments
 * @argv: tableau des arguments
 * @index: index courant dans argv
 *
 * Return: rien
 */
void print_arguments(int argc, char *argv[], int index)
{
	if (index >= argc)
		return;

	print_string(argv[index]);
	_putchar('\n');
	print_arguments(argc, argv, index + 1);
}

/**
 * main - affiche tous les arguments reçus, un par ligne
 * @argc: nombre d'arguments
 * @argv: tableau des arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	print_arguments(argc, argv, 0);
	return (0);
}
