#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - ajoute un nouveau nœud au début d'une liste chaînée
 * @head: double pointeur vers le premier élément de la liste
 * @str: chaîne de caractères à copier dans le nouveau nœud
 *
 * Retour: l'adresse du nouveau nœud, ou NULL si l'allocation échoue
 *
 * La chaîne @str doit être dupliquée avec strdup.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	
	new->str = strdup(str);
	if (new->str ==  (NULL))
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
