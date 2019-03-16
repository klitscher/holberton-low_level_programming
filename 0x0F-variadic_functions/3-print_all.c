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
	void (*f)(char *s);
};
void (*get_func(char *s))(char *)
{
	struct Key key[] = {
		{"c", print},
		{"i", op_sub},
		{"f", op_mul},
		{"s", op_div},
		{NULL, NULL,},
	};
	int i = 0;

	while(key[i].type)
	{
		if (*key[i].type == *s)
			return (key[i].f);
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
	struct Key key;
	va_list ap;
	const char *ptr_format;
	

	va_start(va_list, format);
	ptr_format = format;
	while (*format != '\0')
	{
		if (*format !=
