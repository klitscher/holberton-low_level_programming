#include "search_algos.h"

/**
 * linear_search - Searches through an array using Linear Search
 * @array: Array to search through
 * @size: Size of the array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int idx;

	if (array == NULL)
		return (-1);
	for (idx = 0; idx < size; idx++)
	{
		if (array[idx] == value)
		{
			printf("Value checked array[%u] = [%i]\n", idx, array[idx]);
			return (idx);
		}
		printf("Value checked array[%u] = [%i]\n", idx, array[idx]);
	}
	return (-1);
}
