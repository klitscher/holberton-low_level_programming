#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: node to be deleted
 *
 * Return: the head node's data (n) or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int temp;

	current = (*head)->next;
	temp = (*head)->n;
	free(*head);
	*head = current;

	return (temp);
}
