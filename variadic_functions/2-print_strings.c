#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Affiche une liste de chaînes de caractères,
 *                 séparées par une chaîne donnée,
 *				   suivies d’une nouvelle ligne.
 *
 * @separator: Chaîne utilisée pour séparer
 *			   les différentes chaînes affichées.
 *             Si @separator vaut NULL, aucun séparateur n’est imprimé.
 *
 * @n: Nombre de chaînes passées en arguments variables.
 *
 * Description:
 * Cette fonction parcourt la liste des arguments variables contenant des
 * chaînes de caractères.
 * Chaque chaîne est affichée dans l'ordre où elle est
 * passée en paramètre. Si une chaîne vaut NULL, la fonction affiche "(nil)"
 * à la place. Si un séparateur non NULL est fourni, il est affiché entre
 * deux chaînes successives. Une fois toutes les chaînes affichées, la
 * fonction termine toujours par une nouvelle ligne ("\n").
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *valeur;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		valeur = va_arg(args, char*);

		if (valeur == NULL)
			printf("(nil)");
		else
			printf("%s", valeur);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

	}
	printf("\n");
	va_end(args);
}
