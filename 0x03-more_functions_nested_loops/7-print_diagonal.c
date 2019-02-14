#include "holberton.h"

/**
 * print_diagonal - print diagonal lines
 * @n: amount of lines to be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
		_putchar('\n');
	else
		for (y = 0; y < n; y++)
		{
			for (x = 0; x < y; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
}
