#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * get_bit - returns the value of a bit
 * @n: number to get
 * @index: the index you want to get
 *
 * Return: value of the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mask = 1;

	mask = mask << index;
	if (n & mask)
		return (1);
	else
		return (0);
}
