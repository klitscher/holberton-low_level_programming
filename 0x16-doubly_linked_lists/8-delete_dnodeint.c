 #include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: pointer to beginning of list
 * @index: index to remove node at
 *
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;
	unsigned int idx = index;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	while (index > 0 && current != NULL)
	{
		if (current->next == NULL)
			break;
		current = current->next;
		index--;
		count++;
	}
	if (count < idx)
		return (-1);
	else if (current->prev == NULL && current->next == NULL)
		*head = NULL;
	else if (current->prev == NULL)
	{
		current->next->prev = NULL;
		*head = current->next;
	}
	else if (current->next == NULL)
		current->prev->next = NULL;
	else
	{
		current->prev->next = current->next;
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
