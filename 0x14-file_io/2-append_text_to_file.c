#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * append_text_to_file - function to append text to a file
 * @filename: name of the new file
 * @text_content: contents to put in the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	for (i = 0; text_content[i] != '\0'; i++)
	{
	}
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (-1);
		close(fd);
		return (1);
	}
	fd = open(filename, O_APPEND | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
	{
	}
	write(fd, text_content, i);
	return (1);
}
