#include "holberton.h"

/**
 * print_sign - print the +, - or 0 sign for number
 * @n: The number to be checked
 *
 * Return: returns 1, 0 or -1 depedning on conditions
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
