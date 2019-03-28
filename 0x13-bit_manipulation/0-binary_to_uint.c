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
	int i;
	int j = 1;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	if (b[0] == '0' && b[1] == '\0')
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	i--;
	for (; i >= 0; i--)
	{
		if (b[i + 1] == '\0' && b[i] == '1')
			sum++;
		else if (b[i] == '1')
			sum = sum + j;
		j = j * 2;
	}
	return (sum);
}
