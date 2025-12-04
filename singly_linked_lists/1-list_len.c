#include "lists.h"
#include <stdio.h>

/**
 * list_len - renvoie le nombre d'éléments 
 *			  dans une liste chaînée
 * @h: pointeur vers le premier élément de la liste
 *
 * Retour: le nombre de nœuds dans la liste
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *h2 = h;

	while (h2 != NULL)
	{
		count++;
		h2 = h2->next;
	}
	return (count);
}
