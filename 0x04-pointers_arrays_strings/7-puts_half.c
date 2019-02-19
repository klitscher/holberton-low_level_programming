#include "holberton.h"

/**
 * puts_half - print out half a string
 * @str: string to be cut in half
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	char *str2 = str;
	int half;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	if ((len % 2) != 0)
	{
		half = (len - 1) / 2;
	}
	else
		half = len / 2;
	while (half < len)
	{
		_putchar(str2[half]);
		half++;
	}
	_putchar('\n');
}
