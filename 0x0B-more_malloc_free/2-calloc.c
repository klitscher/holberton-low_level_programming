#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of the array
 *
 * Return: Pointer to an allocated array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ptr;
	char *ptr2;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ptr2 = ptr;
	while (i < nmemb * size)
	{
		*ptr = 0;
		ptr++;
		i++;
	}
	return (ptr2);
}
