#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "holberton");
    hash_table_set(ht, "hetairas", "first in");
    hash_table_set(ht, "mentioner", "second in");
    hash_table_set(ht, "test4", "4th in");
    hash_table_set(ht, "test5", "5th in");
    hash_table_set(ht, "test4", "third in");
    hash_table_set(ht, "betty", "third in");
    return (EXIT_SUCCESS);
}
