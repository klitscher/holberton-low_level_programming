#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * set_bit - sets the value of a bit to one
 * @n: number given
 * @index: place to set the bit to 1
 *
 * Return: 1 if it worked, -1 if it didn't
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);
	mask = mask << index;
	if (*n & mask)
		return (1);
	*n = *n | mask;
	return (1);
}
