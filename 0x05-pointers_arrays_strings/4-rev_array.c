#include "holberton.h"

/**
 * reverse_array - reverse an array of integers
 * @a: array to be reversed
 * @n: number of elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *end = a;
	int *start = a;
	int temp;

	for (; n >= 0; end++, n--)
	{
	}
	end = end - 2;
	for (; start < end; start++, end--)
	{
		temp = *start;
		*start = *end;
		*end = temp;
	}
}
