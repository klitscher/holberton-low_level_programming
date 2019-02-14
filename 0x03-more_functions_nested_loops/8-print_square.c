#include "holberton.h"

/**
 * print_square - prints a square using #
 * @size: size of square
 *
 * Return: void
 */
void print_square(int size)
{
	int y, x;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
