#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: pointer to the head of the doubly linked list
 * @index: index of the node to retrieve, starting from 0
 *
 * Return: pointer to the node at the given index,
 * 		   or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;
	dlistint_t *current_node = head;

	while (current_node != NULL)
	{
		if (current_index == index)
			return (current_node);
		current_node = current_node->next;
		current_index++;
	}
	return (NULL);
}
