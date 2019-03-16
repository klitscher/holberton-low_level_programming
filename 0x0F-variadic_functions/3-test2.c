#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * struct key - new struct
 * @c: char
 * @i: int;
 * @f: float
 * @s: char *
 */
struct Key
{
	char *type;
	void (*_int)(int s);
	void (*_dble)(double s);
	void (*_str)(char *);
};
void (*get_func(char *s))(char *)
{

	struct Key key[] = {
		{"c", _printint},
		{"i", _printint},
		{"f", _printdble},
		{"s", _printstr},
		{NULL, NULL},
	};
	int i = 0;
	while(key[i].type)
	{
		if (*key[i].type == *ptr_format)
			return(key[i].f);
		i++;
	}
	ptr_format++;
	return (NULL);
}
void _printint(int s)
{
	printf("%d", s);
}
void _printdble(double s)
{
	printf("%f", s);
}
void _printstr(char *s)
{
	printf("%s", s);
}
/**
 * print_all - print all the things
 * @format: the format to print them in
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{

	struct Key key;
	va_list ap;
	const char *ptr_format;

	va_start(va_list, format);
	
