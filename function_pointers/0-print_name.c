#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Affiche un nom en utilisant un pointeur de fonction
 * @name: Le nom à afficher
 * @f: Pointeur vers une fonction qui prend un char * en paramètre
 *
 * Description: Cette fonction reçoit une chaîne (name) et un pointeur
 * de fonction (f). Si les deux ne sont pas NULL, elle appelle la
 * fonction pointée par f en lui passant le nom en argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
