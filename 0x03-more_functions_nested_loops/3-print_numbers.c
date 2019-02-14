#include "holberton.h"

/**
 * print_numbers - print numbers 0 - 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		_putchar(a);
	_putchar('\n');
}
