#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: destination of copy
 * @src: source to be copied
 * @n: bytes to be copied
 *
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest1 = dest;
	int len = 0;

	while (len < n && *src != '\0')
	{
		*dest1 = *src;
		len++;
		src++;
		dest1++;
	}
	while (len < n)
	{
		*dest1 = '\0';
		len++;
		}
	return (dest);
}
