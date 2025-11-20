#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Affiche une série de valeurs de types variés
 * @format: Liste de caractères indiquant les types : c, i, f, s
 *
 * Description: La fonction affiche les arguments selon le format donné.
 * Types supportés:
 * c -> char, i -> int, f -> float, s -> string (NULL affiche (nil))
 * Tout autre caractère est ignoré.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int first = 1;
	char *s;
	char c;
	int d;
	double f;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
	if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
		{
			if (!first)
				printf(", ");

			if (format[i] == 'c')
			{
				c = va_arg(args, int);
				printf("%c", c);
			}

			if (format[i] == 'i')
			{
				d = va_arg(args, int);
				printf("%d", d);
			}

			if (format[i] == 'f')
			{
				f = va_arg(args, double);
				printf("%f", f);
			}

			if (format[i] == 's')
			{
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
			}

			first = 0;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
