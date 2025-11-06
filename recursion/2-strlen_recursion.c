#include "main.h"

/**
 * _strlen_recursion - calcule la longueur d'une chaîne de caractères
 * @s: pointeur vers la chaîne dont on veut connaître la longueur
 *
 * Cette fonction utilise la récursion pour compter le nombre de caractères
 * dans une chaîne.
 * Elle incrémente le compteur à chaque appel jusqu’à atteindre
 * le caractère nul '\0', qui marque la fin de la chaîne.
 *
 * Return: la longueur de la chaîne de caractères
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
