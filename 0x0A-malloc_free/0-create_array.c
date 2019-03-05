#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of the array
 * @c: character to initialize array with
 *
 * Return: A pointer to the array, or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
