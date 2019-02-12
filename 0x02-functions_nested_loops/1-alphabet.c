#include "holberton.h"

/**
 * print_alphabet - printing the alphabet
 *
 * Return: 0
 */
int print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return (0);
}
