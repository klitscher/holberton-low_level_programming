#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlist
 * @head: dlist
 * @index: index to grab the node at
 *
 * Return: the nth node of the dlist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;

	if (head == NULL)
		return (NULL);
	node = head;
	while (index > 0 && node != NULL)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
		index--;
	}
	return (node);
}
