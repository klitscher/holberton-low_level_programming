#include "holberton.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: Number to ber printed
 *
 * Return: n
 */
int print_last_digit(int n)
{

	if (n > 9 || n < -9)
	{
		n = n % 10;
		if (n < 0)
		{
			n = n * -1;
		}
	}
	_putchar('0' + n);
	return (n);
}
