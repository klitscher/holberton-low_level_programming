#include "holberton.h"

/**
 * print_triangle - Print out a triangle
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int y, x;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (y = 1; y <= size; y++)
		{
			for (x = size; x > y; x--)
			{
				_putchar(' ');
			}
			for (x = 1; x <= y; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
