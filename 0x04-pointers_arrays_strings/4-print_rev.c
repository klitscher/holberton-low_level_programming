#include "holberton.h"

/**
 * print_rev - print the reverse of the string
 * @s: string to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	char *s1 = s;

	while (*s1 != '\0')
	{
		s1++;
	}
	s1--;
	while (s1 >= s)
	{
		_putchar(*s1);
		s1--;
		}
	_putchar('\n');
}
