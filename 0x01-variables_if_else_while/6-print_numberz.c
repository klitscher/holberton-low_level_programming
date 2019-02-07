#include <stdio.h>

/**
 * main - Function for printing out the singles with putchar
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
