#include "holberton.h"

/**
 * _sqrt_recursion - find the square root of a number
 * @n: the square root to find
 *
 * Return: the squared root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (num(0, n));
}

/**
 * num - Function to count the numbers up to n
 * @i: counter
 * @n: number to find the square root of
 *
 * Return: i and n
 */
int num(int i, int n)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (num(i + 1, n));
}
