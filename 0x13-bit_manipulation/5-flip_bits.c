#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * flip_bits - counts the number of flips
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: the number of times a flip occured
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int mask_n = 0;
	unsigned long int mask_m = 0;
	unsigned long int falses = 0;

	for (i = 63; i >= 0; i--)
	{
		mask_n = n >> i;
		mask_m =  m >> i;
		if ((mask_n & 1) == (mask_m & 1))
			;
		else
			falses++;
	}
	return (falses);
}
