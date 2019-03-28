#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: the number to convert
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int arr[9] = {1, 2, 4, 8, 16, 32, 64, 128, 256};
	int i, j;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	i--;
	for (j = 0; i >= 0; i--, j++)
	{
		if (b[i] == '1')
			sum += arr[j];
	}
	return (sum);
}
