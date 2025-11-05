#include "main.h"

/**
 * main - affiche tous les arguments passés au programme
 * @argc: nombre d’arguments
 * @argv: tableau des arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0, j;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			_putchar('argv[i][j]');
			j++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
