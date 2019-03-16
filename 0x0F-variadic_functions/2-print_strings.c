#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separates the strings
 * @n: number of arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list va_string;
	char *string;
	unsigned int i;

	if (n == 0)
		return;

	va_start(va_string, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(va_string, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va-end(va_string);
	printf("\n");
}
