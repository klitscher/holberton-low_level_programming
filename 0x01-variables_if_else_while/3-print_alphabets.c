#include <stdio.h>

/**
 * main - Print alphabet in lowercase, then uppercase
 *
 * Return: 0
 */
int main(void)
{
	char a;
	char A;

	a = 'a';
	A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
