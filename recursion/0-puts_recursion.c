#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - affiche une chaîne de caractères,
 *					suivie d'un saut de ligne
 * @s: pointeur vers la chaîne à afficher
 *
 * Cette fonction utilise la récursion pour parcourir la chaîne de caractère
 * Jusqu’à la fin ('\0').
 * À chaque appel, elle affiche le caractère courant.
 * Quand le caractère nul est atteint,
 * Elle affiche un saut de ligne et arrête.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
