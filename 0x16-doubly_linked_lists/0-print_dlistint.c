#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Print a doubly linked list
 * @h: pointer to the dlist
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t ele;

	if (h == NULL)
		return (0);
	for (ele = 0; h != NULL; ele++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (ele);
}
