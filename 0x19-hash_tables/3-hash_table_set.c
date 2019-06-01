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
	char *vcpy = NULL;
	hash_node_t *head;
	unsigned long int idx = 0;

	/* Error checking */
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	/* getting index */
	idx = key_index((unsigned char *)key, ht->size);
	printf("Index: %lu\n", idx);

	/*initializing list*/
	head = calloc(1, sizeof(hash_node_t));
	if (head == NULL)
	{
		free(ht->array);
		free(ht);
		return (0);
	}
	vcpy = malloc(sizeof(char) * strlen(value) + 1);
	if (vcpy == NULL)
	{
		free(head);
		free(ht->array);
		free(ht);
		return (0);
	}
	strcpy(vcpy, value);
	head->value = vcpy;
	head->key = (char *)key;
	head->next = NULL;

	/* Collision checking */
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = head;
		printf("First in: %s\n", head->key);
	}
	else
	{
		head->next = ht->array[idx];
		ht->array[idx] = head;
		printf("Next in: %s\n", head->key);
	}
	return (1);
}
