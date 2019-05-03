#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - free memory from a dlist
 * @head: dlist to free
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	while (current != NULL)
	{
		current = current->next;
		free(head);
		head = current;
	}
}
