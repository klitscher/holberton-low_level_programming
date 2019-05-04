#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node
 * @h: dlist to insert thing in
 * @idx: idx to insert a node at
 * @n: data to insert into new node
 *
 * Return: address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current, *past;
	int count = idx;
	unsigned int check = 0;
	
	if (h == NULL)
		return (NULL);
	current = *h;
	past = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (count > 0 && current != NULL)
	{
		current = current->next;
		if (count - 1 > 0)
			past = past->next;
		count--;
		check++;
	}
	if (idx == 0)
	{
		new->prev = NULL;
		*h = new;
	}
	else if (check < idx)
	{
		free(new);
		return (NULL);
	}
	else
	{
		new->prev = past;
		past->next = new;
	}
	new->next = current;
	if (current != NULL)
		current->prev = new;
	return (new);
}
