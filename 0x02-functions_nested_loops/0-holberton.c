#include "holberton.h"

/**
 * main - function for printing out text
 *
 * Return: 0
 */
int main(void)
{
	char h[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n', '\n'};
	int i = 0;

	while (i < 10)
	{
		_putchar(h[i]);
		i++;
	}
	return (0);
}
