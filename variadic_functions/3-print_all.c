#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0, printed = 0;
    char *s;

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == 'c' || format[i] == 'i' ||
            format[i] == 'f' || format[i] == 's')
        {
            if (printed)
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
                if (!s)
                    printf("(nil)");
                if (s)
                    printf("%s", s);
            }
            printed = 1;
        }
        i++;
    }
    va_end(args);
    printf("\n");
}
