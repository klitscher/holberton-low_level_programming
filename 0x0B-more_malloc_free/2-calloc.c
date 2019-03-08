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
	int i = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (nmemb > 0)
	{
		ptr[i] = 0;
		i++;
		nmemb--;
	}
	return (ptr);
}
