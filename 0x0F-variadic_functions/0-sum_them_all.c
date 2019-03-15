#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns a sum of all the parameters
 * @n: total number of variables
 *
 * Return: the sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list va_sum;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(va_sum, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(va_sum, unsigned int);
	}
	va_end(va_sum);
	return (sum);
}
