#include "holberton.h"

/**
 * main - function for printing out text
 *
 * Return: 0
 */
int main(void)
{
	char h[10] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n', '\0'};
	int i = 0;

	while (i < 10)
	{
		_putchar(h[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
