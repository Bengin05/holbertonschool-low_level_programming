#include "main.h"

/**
 * _print_rev_recursion - affiche une chaîne de caractères en ordre inverse
 * @s: pointeur vers la chaîne à afficher
 *
 * Cette fonction utilise la récursion pour parcourir la chaîne jusqu’à la fin,
 * puis affiche les caractères dans l’ordre inverse lors du retour des appels
 * récursifs. Elle n’utilise aucune boucle.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
