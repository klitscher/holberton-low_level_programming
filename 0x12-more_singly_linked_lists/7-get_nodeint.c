#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at index
 * @head: list
 * @index: index to get node at
 *
 * Return: the nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int  i = 0;

	current = head;
	while (i < index)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		i++;
	}
	return (current);
}
