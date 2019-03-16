#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * _helper - prints the divider
 * @pf: pointer to a char
 *
 * Return: void
 */
void _helper(const char *pf)
{
	while (*pf == 'c' || *pf == 'i' || *pf == 'f' || *pf == 's')
	{
		if (*(pf + 1) != '\0')
			printf(", ");
		break;
	}
}
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list va_print;
	const char *pf = format;
	char *temp;

	va_start(va_print, format);
	while (format != NULL && *pf != '\0')
	{
		switch (*pf)
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
			pf++;
			continue;
		}
		_helper(pf);
		pf++;
	}
	va_end(va_print);
	printf("\n");
}
