#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "3-calc.h"

/**
 * main - program to calculate two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: the calculated value
 */
int main(int argc, char *argv[])
{
	int total;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (get_op_func(argv[2]) == 0)
	{
		printf("Error\n");
		exit(99);
	}
	total = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", total);
	return (0);
}
