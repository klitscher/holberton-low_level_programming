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

	before = *head;
	after = *head;
	/*Iterating through list till it gets to correct index*/
	while (i < idx)
	{
		if (before->next == NULL)
			return (NULL);
		before = before->next;
		after = after->next;
		i++;
	}
	/*moving one past the correct index*/
	after = after->next;
	/* Creating new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	before->next = new_node;
	new_node->n = n;
	new_node->next = after;

	return (new_node);
}
