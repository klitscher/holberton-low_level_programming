#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - Gives you index of the key
 * @key: key
 * @size: size of the array of the hash table
 *
 * Return: Index at where the key/value pair will be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0;
	unsigned long int index = 0;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
