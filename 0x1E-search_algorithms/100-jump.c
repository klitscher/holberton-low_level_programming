#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Function that uses jump search to find a value
 * @array: Pointer to array to find value in
 * @size: Size of the array
 * @value: Value to find in array
 *
 * Return: First index where value is found, or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	int idx = 0, jump, start, end;

	if (array == NULL || array[idx] > value)
		return (-1);
	jump = sqrt(size);
	for (idx = 0; (size_t)idx < size + jump; idx += jump)
	{
		if (idx == 0 && array[idx] == value)
		{
			printf("Value checked array[%i] = [%i]\n", idx, array[idx]);
			printf("Value found between indexes [%i] and [%i]\n", idx, idx + jump);
			printf("Value checked array[%i] = [%i]\n", idx, array[idx]);
			return (idx);
		}
		if ((size_t)idx >= size || array[idx] >= value)
		{
			start = idx - jump;
			if ((size_t)idx > size)
			{
				end = size;
				printf("Value found between indexes [%i] and [%i]\n", start, idx);
			}
			else
			{
				end = idx;
				printf("Value found between indexes [%i] and [%i]\n", start, end);
			}
			for (idx = start; idx <= end && (size_t)idx < size; idx++)
			{
				if (array[idx] == value)
				{
					printf("Value checked array[%i] = [%i]\n", idx, array[idx]);
					return (idx);
				}
				printf("Value checked array[%i] = [%i]\n", idx, array[idx]);
			}
			return (-1);
		}
		printf("Value checked array[%i] = [%i]\n", idx, array[idx]);
	} return (-1);
}
