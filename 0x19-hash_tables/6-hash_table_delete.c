#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: Hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	int i, size;
	hash_node_t *head, *next;

	if (ht != NULL)
	{
		size = ht->size;
		for (i = 0; i < size; i++)
		{
			if (ht->array[i] != NULL)
			{
				head = ht->array[i];
				while (head != NULL)
				{
					next = head->next;
					free(head->value);
					free(head->key);
					free(head);
					head = next;
				}
			}
		}
		free(ht->array);
		free(ht);
	}
}
