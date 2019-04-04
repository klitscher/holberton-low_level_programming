#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * read_write - read and write from buffer
 * @fd: First file descriptor
 * @fd2: Second file descriptor
 * @buff: Buffer
 * @argv1: First command line argument
 * @argv2: Second command line argument
 */
void read_write(int fd, int fd2, char *buff, char *argv1, char *argv2)
{
	ssize_t b_r, b_w;

	do {
		b_r = read(fd, buff, 1024);
		if (b_r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv1);
			exit(98);
		}
		if (b_r == 0)
			return;
		b_w = write(fd2, buff, b_r);
		if (b_w < 1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv2);
			exit(99);
		}
	} while (1);
}
/**
 * main - reads a textfile and prints it to POSIX standard output
 * @argc: Number of arguments
 * @argv: Array of strings
 *
 * Return: Actual number of letters it could read and print
 */
int main(int argc, char *argv[])
{
	int from, to, close_it;

	char buff[1024] = {'\0'};

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	read_write(from, to, buff, argv[1], argv[2]);

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
