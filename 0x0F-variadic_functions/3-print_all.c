#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list va_print;
	const char *ptr_format;
	char *temp;

	ptr_format = format;
	va_start(va_print, format);
	while (*ptr_format != '\0' && ptr_format != NULL)
	{
		switch (*ptr_format)
		{
		case 'c':
			printf("%c", (va_arg(va_print, int)));
			break;
		case 'i':
			printf("%d", va_arg(va_print, int));
			break;
		case 'f':
			printf("%f", va_arg(va_print, double));
			break;
		case 's':
			temp = va_arg(va_print, char *);
			if (temp == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", temp);
			break;
		default:
			ptr_format++;
			continue;
		}
		if (*(ptr_format + 1) != '\0')
			printf(", ");
		ptr_format++;
	}
	va_end(va_print);
	printf("\n");
}
