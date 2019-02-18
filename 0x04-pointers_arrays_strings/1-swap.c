#include "holberton.h"

/**
 * swap_int - Swaps two variables
 * @a: 1st pointer to be swapped
 * @b: 2nd pointer to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
