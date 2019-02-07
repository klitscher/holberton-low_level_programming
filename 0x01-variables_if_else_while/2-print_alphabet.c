#include <stdio.h>

/**
 * main - Function to print the alphabet
 *
 * Return: - should return 0
 */
int main(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
