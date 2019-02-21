#include "holberton.h"

/**
 * _strncat - concatenates two strings, with extra stuff
 * @dest: destination
 * @src: source
 * @n: amount of bytes used
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest1 = dest;
	int len = 0;

	while (*dest1)
	{
		dest1++;
	}
	while (len < n && *src != '\0')
	{
		*dest1 = *src;
		dest1++;
		src++;
		len++;
	}
	return (dest);
}
