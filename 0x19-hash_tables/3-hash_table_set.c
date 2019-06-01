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

	if (ht == NULL || key == NULL ||
	    *key == '\0' || value == NULL || ht->size == 0)
		return (0);
	/* getting index */
	idx = key_index((unsigned char *)key, ht->size);
	/*initializing node/list*/
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
	hash_node_t *slow, *fast;

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = head;
	}
	else
	{
		slow = ht->array[idx];
		fast = slow->next;
		/*why does this work without strcmp*/
		if (strcmp(slow->key, key) == 0)
		{
			head->next = slow->next;
			ht->array[idx] = head;
			free(slow);
			return (0);
		}
		while (fast != NULL)
		{
			/*why does this work without strcmp*/
			if (strcmp(fast->key, key) == 0)
			{
				slow->next = fast->next;
				free(fast);
				head->next = ht->array[idx];
				ht->array[idx] = head;
				return (0);
			}
			fast = fast->next;
			slow = slow->next;
		}
		head->next = ht->array[idx];
		ht->array[idx] = head;
	}
	return (0);
}
