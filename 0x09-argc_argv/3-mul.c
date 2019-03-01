#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Number of arguments passed
 * @argv: Array of arguments passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int mult;

	for (i = 0; i < argc - 1; i++)
	{
	}
	if (i > 1 && i <= 2)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("ERROR\n");
		return (1);
	}
}
