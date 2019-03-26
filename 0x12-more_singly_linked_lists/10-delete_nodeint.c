#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: list to have node delted from
 * @index: location in list to delete node
 *
 * Return: 1 if success, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *before, *after, *delete;
	unsigned int temp = index;

	if (head == NULL || *head == NULL)
		return (-1);
	before = *head;
	after = *head;
	delete = *head;

	if (index == 0)
	{
		*head = before->next;
		before = before->next;
		after = after->next;
		free(delete);
		delete = after;
		return (1);
	}
	while (index > 0)
	{
		after = after->next;
		delete = delete->next;
		index--;
	}
	after = after->next;
	index = temp;
	while (index > 1)
	{
		before = before->next;
		index--;
	}
	before->next = after;
	free(delete);
	return (1);
}
