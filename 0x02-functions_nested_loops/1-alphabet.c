#include "holberton.h"

/**
 * print_alphabet - printing the alphabet
 *
 * Return: 0
 */
int print_alphabet(void)
{
	char s[] = "abcdefghigklmnopqrstuvwxyz";
	int i = 0;

	while (i <= 25)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
