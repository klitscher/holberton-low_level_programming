#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @n: amount of variables to be printed
 * @separator: string to be printed between numbers
 *
 * Return: the printed numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va_numbers;
	int num;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(va_numbers, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(va_numbers, unsigned int);
		printf("%d", num);
		if (i !=  n - 1 && *separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(va_numbers);
}
