#include <stdio.h>

/**
 * main - find the prime factor of a large number
 *
 * Return: 0
 */
int main(void)
{
	long int a = 612852475143;
	long int b = 2;
	long int c = a;

	while (b <= (c / 2))
	{
		while (c % b == 0)
		{
			c = c / b;
		}
		b++;
	}
	printf("%ld\n", c);
	return (0);
}
