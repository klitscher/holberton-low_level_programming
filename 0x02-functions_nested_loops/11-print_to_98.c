#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - Prints all the numbers to 98
 * @n: User input
 *
 *Return: no return
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%i, ", i);
			else
				printf("%i", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%i, ", i);
			else
				printf("%i", i);
		}
	}
	printf("\n");
}
