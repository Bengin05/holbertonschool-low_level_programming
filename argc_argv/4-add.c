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
