#include <unistd.h>
#include <string.h>

/**
 * main - prints to standard error
 *
 * Return: should return 1
*/
int main(void)
{
	char sl[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, sl, 59);
	return (1);
}
