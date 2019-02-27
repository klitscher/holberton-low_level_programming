#include "holberton.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: String to be reversed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char *s1 = s;

	if (*s1 == '\0')
	{
		return;
	}
	_print_rev_recursion(s1 + 1);
	_putchar(*s);
}
