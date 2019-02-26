#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * @a: a - array to be multiplied
 * @size: size of the array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x;
	int suml = 0;
	int sumr = 0;

	for (x = 0; x < size * size; x += size + 1)
	{
		suml = suml + a[x];
	}
	for (x = size - 1; x < (size * size) - (size - 1); x += size - 1)
	{
		sumr = sumr + a[x];
	}
	printf("%d, %d\n", suml, sumr);
}
