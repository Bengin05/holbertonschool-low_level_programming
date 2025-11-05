#include "main.h"

/**
 * print_name_recursively - Affiche une chaîne de caractères
 *                         caractère par caractère de façon récursive
 * @s: Chaîne de caractères à afficher
 *
 * Return: Rien
 */
void print_name_recursively(char *s)
{
	if (*s == '\0')
		return;

	_putchar(*s);
	print_name_recursively(s + 1);
}

/**
 * main - Affiche le nom du programme suivi d'une nouvelle ligne
 * @argc: Nombre d'arguments passés au programme
 * @argv: Tableau contenant les arguments passés au programme
 *
 * Return: Toujours 0 (succès)
 */
int main(int argc, char *argv[])
{
	(void)argc;

	print_name_recursively(argv[0]);
	_putchar('\n');

	return (0);
}
