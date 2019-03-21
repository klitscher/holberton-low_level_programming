#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of the list
 * @h: list to be printed
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	unsigned int count = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			temp = temp->next;
			count++;
			continue;
		}
		count++;
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (count);
}
