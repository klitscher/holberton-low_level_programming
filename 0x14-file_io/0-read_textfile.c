#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * read_textfile - reads a textfile and prints it to POSIX standard output
 * @filename: name of the file to read
 * @letters: Number of letters it should read and print
 *
 * Return: Actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	unsigned int i = 0;
	char buff[1024] = {'\0'};

	if (filename == NULL)
		return (0);

	/* opens the file in read only mode*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/*reading the file to byte letters into the buffer buff*/
	read(fd, buff, letters);

	for (i = 0; buff[i] != '\0'; i++)
	{
	}

	/*write new buffer to stdout with length of array*/
	write(STDOUT_FILENO, buff, i);

	/* When done with the file, close it */
	close(fd);
	return (i);
}
