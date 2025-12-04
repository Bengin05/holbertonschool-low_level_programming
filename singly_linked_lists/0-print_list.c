#include "lists.h"
#include <stdio.h>

/**
 * print_list - Affiche tous les éléments d'une liste de type list_t
 * @h: pointeur constant vers le premier élément de la liste chaînée
 *
 * Description:
 * Cette fonction parcourt une liste simplement chaînée et affiche
 * chaque élément sous la forme suivante :
 *     [longueur] chaîne
 * Si le champ str est NULL, la fonction affiche :
 *     [0] (nil)
 *
 * Return: le nombre de nœuds dans la liste
 */
size_t print_list(const list_t *h)
{
	size_t compteur = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		compteur++;
		h = h->next;
	}
	return (compteur);
}
