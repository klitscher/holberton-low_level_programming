#include "holberton.h"

/**
 * print_numbers - print integers
 *@n: User integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int x = 0;
	int y = 10;

	while (x <= 11)
	{
		_putchar((n % y) + '0');
		y = y * 10;
		x++;
	}
	_putchar('\n');
}
