#include <stdlib.h>
#include "lists.h"

/**
 * free_list - libère tous les éléments d'une liste chaînée
 * @head: pointeur vers le premier élément de la liste
 *
 * La fonction libère la mémoire allouée pour chaque nœud
 * pour les chaînes de caractères.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->next);
		free(head);
		head = temp;
	}
}
