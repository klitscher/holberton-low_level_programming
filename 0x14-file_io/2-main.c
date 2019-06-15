#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac < 2)
	{
		printf("Usage: %s filename\n", av[0]);
		return (1);
	}
	res = append_text_to_file(av[1], NULL);
	printf("%i\n", res);
	return (0);
}
