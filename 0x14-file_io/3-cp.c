#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - reads a textfile and prints it to POSIX standard output
 * @argc: Number of arguments
 * @argv: Array of strings
 *
 * Return: Actual number of letters it could read and print
 */
int main(int argc, const char *argv[])
{
	int from, to, i;
	char buff[1024] = {'\0'};

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (to == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	read(from, buff, 157);

	for (i = 0; buff[i] != '\0'; i++)
	{
	}

	write(to, buff, i);

	close(from);
	close(to);
	return (0);
}
