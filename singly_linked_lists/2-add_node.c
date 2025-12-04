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
	size_t count = 0;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new	== NULL)
		return (NULL)

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[count] != '\0')
		count++;
	
	new->len = *head;
	*head = new;

	return (new);
}

