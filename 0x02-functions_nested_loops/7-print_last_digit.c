#include "holberton.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: Number to ber printed
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	n = _abs(n);

	if (n > 9)
	{
		n = n % 10;
	}
	_putchar('0' + n);
	return (n);
}
