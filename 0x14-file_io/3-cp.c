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
	int from, to;
	ssize_t b_r, b_w, close_it;
	char buff[1024] = {'\0'};

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	do {
		b_r = read(from, buff, 1024);
		if (b_r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (b_r == 0)
			break;
		b_w = write(to, buff, b_r);
		if (b_w < 1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
			exit(99);
		}
	} while (1);

	close_it = close(from);
	if (close_it == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	close_it = close(to);
	if (close_it == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}

	return (0);
}
