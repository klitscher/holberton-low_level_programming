#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes the function given as a param on array element
 * @array: array to iterate through
 * @size: size of the array
 * @action: function to execute
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action) (int))
{
	unsigned int i = 0;

	if (action == NULL)
		return;
	if (array == NULL)
		return;
	if (size == 0)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
