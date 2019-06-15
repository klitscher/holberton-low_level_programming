#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
void _printint(va_list args)
{
	printf("%d\n", va_arg(args, int));
}
void _printdble(va_list args)
{
	printf("%f\n", va_arg(args, double));
}
void _printstr(va_list args)
{
	char *temp;

	temp = va_arg(args, char *);
	printf("%s\n", temp);
}
void _printchar(va_list args)
{
	printf("%c", va_arg(args, int));
}
void (*get_func(const char *s))(va_list)
{

	types_t key[] = {
		{'c', _printchar},
		{'i', _printint},
		{'f', _printdble},
		{'s', _printstr},
		{'\0', NULL},
	};
	int i = 0;
	while(key[i].c != '\0')
	{
		if (key[i].c == *s)
			return(key[i].f);
		i++;
	}
	return (NULL);
}
/**
 * print_all - print all the things
 * @format: the format to print them in
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	const char *ptr_format;

	ptr_format = format;
	va_start(ap, format);
	while (format != NULL && *ptr_format != '\0')
	{
		get_func(ptr_format)(ap);
		ptr_format++;
	}
	va_end(ap);
}
