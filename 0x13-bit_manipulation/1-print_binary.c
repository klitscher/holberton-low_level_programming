#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_binary - print the binary representation of a number
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, result;

	if (n == 0)
		_putchar('0');
	for (i = 32; i >= 0; i--)
	{
		result = n >> i;
		if (result & 1)
			break;
	}
	for (; i >= 0; i--)
	{
		result = n >> i;
		if (result & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
