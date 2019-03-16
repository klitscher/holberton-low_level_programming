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

/**	ptr_format = format;
	while (*ptr_format != '\0')
	{
		printf("%c", *ptr_format);
		ptr_format++;
		}*/
	ptr_format = format;
	va_start(va_print, format);
	while (*ptr_format != '\0')
	{
		switch(*ptr_format)
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
			if (*ptr_format == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", va_arg(va_print, char *));
			break;
		}
		ptr_format++;
	}
	va_end(va_print);
	printf("\n");
}

		/*	if (*format == 'c' || *format == 'i')
		{
			int_or_char = va_arg(va_print, int);
			printf("%i", int_or_char);
		}
		s = va_arg(va_print, char *)*/
