#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given location
 * @head: list to insert node into
 * @idx: index to insert a node at
 * @n: number in node
 *
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *before, *after, *new_node;
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);
	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	before = *head;
	after = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	while (i < idx)
	{
		if (before == NULL)
			return (NULL);
		before = before->next;
		after = after->next;
		i++;
	}
	after = after->next;
	before->next = new_node;
	new_node->next = after;
	return (new_node);
}
