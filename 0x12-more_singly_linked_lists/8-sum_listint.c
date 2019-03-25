#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum all the data in a list
 * @head: the list to be sumed
 *
 * Return: the sum of the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	current = head;
	while (current != NULL)
	{
		if (current == NULL)
			return (0);
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
