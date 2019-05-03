#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - return the number of elements in a doubly linked list
 * @h: doubly linked list
 *
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t ele;

	if (h == NULL)
		return (0);
	for (ele = 0; h != NULL; ele++)
	{
		h = h->next;
	}
	return (ele);
}
