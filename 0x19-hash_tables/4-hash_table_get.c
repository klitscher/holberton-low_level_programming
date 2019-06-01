#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: hash table to retieve element from
 * @key: Key
 *
 * Return: Value or null if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int idx;
	hash_node_t *head = NULL;

	idx = key_index((unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
		return (NULL);
	head = ht->array[idx];
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}
	return (NULL);
}
