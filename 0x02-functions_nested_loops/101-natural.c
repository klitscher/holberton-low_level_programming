#include <stdio.h>

/**
 * main - print out natural numbers
 *
 * Return: 0
 */
int main(void)
{
	int t;
	int f;
	int tsum = 0;
	int fsum = 0;
	int total = 0;

	for (t = 0; t < 1024; t += 3)
		tsum = t + tsum;
	for (f = 0; f < 1024; f += 5)
		fsum = f + fsum;
	total = fsum + tsum;
	printf("%u\n", total);
	return (0);
}
