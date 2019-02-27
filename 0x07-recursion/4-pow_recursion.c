#include "holberton.h"

/**
 * _pow_recursion - returns the vale of something rasied to a power
 * @x: Number to be raised
 * @y: Power that x is to be raised to
 *
 * Return: value of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
