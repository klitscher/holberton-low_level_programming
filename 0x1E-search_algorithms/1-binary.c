#include "search_algos.h"

/**
 * binary_search - Driver function for binary search
 * @array: Pointer to array to search through
 * @size: Size of the array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	int idx;

	if (array == NULL)
		return (-1);
	idx = binary_recursion(array, 0, size - 1, value);
	return (idx);
}

/**
 * binary_recursion - Main worker for program
 * @array: Array to work through
 * @lo: Low index
 * @hi: Hi index
 * @value: Value to check for
 *
 * Return: First index where value is located, or -1 on failure
 */
int binary_recursion(int *array, size_t lo, size_t hi, int value)
{
	int mid = (lo + hi) / 2;

	/* Success Case */
	if (array[mid] == value)
	{
		print_array(array, lo, hi);
		return (mid);
	}

	/*Failure Cases*/
	if (array[mid] != value && (size_t)mid == 0)
	{
		print_array(array, lo, hi);
		return (-1);
	}
	if (array[mid] != value && (size_t)mid == hi)
	{
		print_array(array, lo, hi);
		return (-1);
	}

	/*Spliting array left or right*/
	if (array[mid] > value)
	{
		print_array(array, lo, hi);
		return (binary_recursion(array, lo, mid - 1, value));
	}
	else
	{
		print_array(array, lo, hi);
		return (binary_recursion(array, mid + 1, hi, value));
	}
}

/**
 * print_array - print an array
 * @array: pointer to array to print
 * @lo: begining of array
 * @hi: end of an array
 *
 * Return: void
 */
void print_array(int *array, size_t lo, size_t hi)
{
	size_t idx;

	for (idx = lo; idx < hi + 1; idx++)
	{
		if (idx == lo)
			printf("Searching in array: ");
		if (idx != hi)
			printf("%i, ", array[idx]);
		else
			printf("%i\n", array[idx]);
	}
}
