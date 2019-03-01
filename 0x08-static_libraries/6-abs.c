#include "holberton.h"

/**
 * _abs - Computes the absolute value of an int
 * @n: value to be checked
 *
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else if (n >= 0)
	{
		return (n);
	}
	return (0);
}
