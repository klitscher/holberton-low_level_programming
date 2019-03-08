#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - write an array of integers
 * @min: lowest value
 * @max: highest value
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(((max + 1) - min) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
