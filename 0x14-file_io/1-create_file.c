#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * create_file - function to create a file
 * @filename: name of the new file
 * @text_content: contents to put in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);
		if (fd == -1)
			return (-1);
		close(fd);
		return (1);
	}
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
	{
	}
	write(fd, text_content, i);
	return (1);
}
