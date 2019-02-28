#include "holberton.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (cnt(2, n));
}

/**
 * cnt - divides n by i
 * @i: divisor
 * @n: number to be divided by
 *
 * Return: i and n
 */
int cnt(int i, int n)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (i > n / 2)
	{
		return (1);
	}
	return (cnt(i + 1, n));
}
