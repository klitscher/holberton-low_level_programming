#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints a certain amount of elements
 * @n: number of elements to be printed
 * @a: string to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int len = 0;

	while (len < n)
	{
		if (len == (n - 1))
		{
			printf("%d", *a);
			a++;
			len++;
		}
		else
		{
			printf("%d, ", *a);
			a++;
			len++;
		}
	}
	printf("\n");
}
