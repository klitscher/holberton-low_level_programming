#include "holberton.h"

/**
 * factorial - Return a factorial of a number
 * @n: Factorial to be computed
 *
 * Return: The factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return ((n) * factorial(n - 1));
}
