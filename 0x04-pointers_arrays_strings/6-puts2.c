#include "holberton.h"

/**
 * puts2 - prints one char out of two
 * @str: string to find character in
 *
 * Return: void
 */
void puts2(char *str)
{
	while (*str != '\0' && (*str - 1) != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
