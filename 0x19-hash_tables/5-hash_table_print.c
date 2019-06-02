#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	int i, size;
	hash_node_t *head;
	int count = 0;

	printf("{");
	if (ht != NULL)
	{
		size = ht->size;
		for (i = 0; i < size; i++)
		{
			if (ht->array[i] != NULL)
				count++;
		}
		for (i = 0; i < size; i++)
		{
			if (ht->array[i] == NULL)
				continue;
			head = ht->array[i];
			while (head != NULL)
			{
				if (count > 1)
				{
					printf("'%s': '%s', ", head->key, head->value);
					count--;
				}
				else
					printf("'%s': '%s'", head->key, head->value);
				head = head->next;
			}
		}
	}
	printf("}\n");
}
