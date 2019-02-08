#include <stdio.h>

/**
 * main - Function to print out all double digits, but some
 *
 * Return: 0
 */
int main(void)
{
	int a = '0';
	int b = '0';
	int c = '0';
	int d = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					if((a != '9' || b != '9') && (c != '9' || d != '9') && (b != d))
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						if (a != '9' || b != '9' || c != '9' || d != '9')
						{
							putchar(',');
							putchar(' ');
						}
					}
					d++;
				}
				d = '0';
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
	putchar('\n');
	return (0);
}
