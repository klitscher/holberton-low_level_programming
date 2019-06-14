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
	hash_node_t *head, *last_node;
	int count = 0;

	while (ht != NULL)
	{
		printf("{");
		size = ht->size;
		for (i = 0; i < size; i++)
		{
			if (ht->array[i] != NULL)
				count = i;
		}

		if (count == 0)
		{
			printf("}\n");
			break;
		}
		last_node = ht->array[count];
		while (last_node->next != NULL)
			last_node = last_node->next;

		for (i = 0; i < size; i++)
		{
			if (ht->array[i] == NULL)
				continue;
			head = ht->array[i];
			while (head != NULL)
			{
				if (head != last_node)
					printf("'%s': '%s', ", head->key, head->value);
				else
					printf("'%s': '%s'", head->key, head->value);
				head = head->next;
			}
		}
		printf("}\n");
		break;
	}
}
