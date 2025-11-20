#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - affiche des nombres séparés par une chaîne
 * @separator: chaîne à afficher entre les nombres
 * @n: nombre d'entiers transmis à la fonction
 *
 * Description: utilise printf pour afficher tous les entiers
 * transmis en arguments variables, suivis d'un saut de ligne.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int valeur = va_arg(args, int);

		printf("%d", valeur);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
