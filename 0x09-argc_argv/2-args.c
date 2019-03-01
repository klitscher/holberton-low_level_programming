#include "holberton.h"
#include <stdio.h>

/**
 * main - function to print all the arguments the program it receives
 * @argc: Number of arguments passed
 * @argv: The arguments that are passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
