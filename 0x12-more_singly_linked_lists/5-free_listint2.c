#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint
 * @head: list to free
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = *head;
	while (ptr != NULL)
	{
		*head = ptr;
		ptr = ptr->next;
		free(*head);
	}
	*head = NULL;

}
