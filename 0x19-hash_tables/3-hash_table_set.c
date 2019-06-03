#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: hash table to add an element to
 * @key: Key
 * @value: value associated with key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *vcpy = NULL, *kcpy = NULL;
	hash_node_t *head = NULL;
	unsigned long int idx = 0;

	if (ht == NULL || ht->size < 1 || ht->array == NULL ||
	    key == NULL || *key == '\0' || value == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	head = calloc(1, sizeof(hash_node_t));
	if (head == NULL)
	{
		free(ht->array);
		free(ht);
		return (0);
	}
	/*vcpy = malloc(sizeof(char) * strlen(value) + 1);*/
	vcpy = strdup(value);
	if (vcpy == NULL)
	{
		free(head);
		free(ht->array);
		free(ht);
		return (0);
	}
	/*kcpy = malloc(sizeof(char) * strlen(key) + 1);*/
	kcpy = strdup(key);
	if (kcpy == NULL)
	{
		free(vcpy);
		free(head);
		free(ht->array);
		free(ht);
		return (0);
	}
	head->value = vcpy;
	head->key = kcpy;
	head->next = NULL;
	ht_add_node(ht, head, idx, key);
	return (1);
}

/**
 * ht_add_node - Adds node to hastable
 * @ht: ht to add a node to
 * @head: node to add
 * @idx: index
 * @key: Key to check at index
 *
 * Return: 0
 */
int ht_add_node(hash_table_t *ht, hash_node_t *head,
		 int idx, const char *key)
{
	hash_node_t  *current;

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = head;
	}
	else
	{
		current = ht->array[idx];
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(current->value);
				current->value = head->value;
				free(head->key);
				free(head);
				return (0);
			}
			current = current->next;
		}
		head->next = ht->array[idx];
		ht->array[idx] = head;
	}
	return (0);
}
