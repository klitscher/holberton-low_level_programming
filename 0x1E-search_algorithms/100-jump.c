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
	int idx, jump, start, end;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);
	for (idx = 0; (size_t)idx <= size; idx += jump)
	{
		if (array[idx] >= value)
		{
			start = idx - jump;
			end = idx;
			printf("Value found between indexes [%i] and [%i]\n", start, end);
			for (idx = start; idx <= end; idx++)
			{
				if (array[idx] == value)
				{
					printf("Value checked array [%i] = [%i]\n", idx, array[idx]);
					return (idx);
				}
				printf("Value checked array [%i] = [%i]\n", idx, array[idx]);
			}
			return (-1);
		}
		printf("Value checked array [%i] = [%i]\n", idx, array[idx]);
	}
	return (-1);
}
