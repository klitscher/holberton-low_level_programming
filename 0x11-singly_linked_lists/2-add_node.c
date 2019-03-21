#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * _strlen - find the length of a string
 * @str: the string to find the length of
 *
 * Return: the length of the string: i
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}
/**
 * add_node - adds a new node to a list
 * @head: pointer to a pointer to a list
 * @str: string to place in the node
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = _strlen(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
