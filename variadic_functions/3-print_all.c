#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything according to a format
 * @format: list of types of arguments (c, i, f, s)
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, first = 1;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's')
		{
			if (!first)
				printf(", ");
			if (format[i] == 'c')
				printf("%c", va_arg(args, int));
			if (format[i] == 'i')
				printf("%d", va_arg(args, int));
			if (format[i] == 'f')
				printf("%f", va_arg(args, double));
			if (format[i] == 's')
			{
				s = va_arg(args, char *);
				if (s)
					printf("%s", s);
				if (!s)
					printf("(nil)");
			}
			first = 0;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
