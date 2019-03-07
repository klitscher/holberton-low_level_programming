#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: number to allocate memory for
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr =  malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
