#include "lists.h"
#include <stdio.h>

/**
 * list_len - renvoie le nombre d'éléments dans une liste chaînée
 * @h: pointeur vers le premier élément de la liste
 *
 * Retour: le nombre de nœuds dans la liste
 */
size_t list_len(const list_t *h)
{
	size_t compteur = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		compteur++;
		current = current->next;
	}
	return (compteur);
}
