#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum al the data in the dlist
 * @head: dlist to sum data of
 *
 * Return: the sum or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	if (head == NULL)
		return (0);
	node = head;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
