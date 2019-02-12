#include "holberton.h"

/**
 * print_alphabet_x10 - printing the alphabet
 *
 * Return: 0
 */
int print_alphabet_x10(void)
{
	char a = 'a';
	int i = 0;

	while (i < 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		a = 'a';
		i++;
	}
	return (0);
}
