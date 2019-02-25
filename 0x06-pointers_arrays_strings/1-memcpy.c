#include "holberton.h"

/**
 * _memcpy - copies a memory area
 * @dest: Area to be copied to
 * @src: Area to be copied
 * @n: amount of memory to be copied
 *
 * Return: destination of memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest1 = dest;

	while (n > 0)
	{
		*dest1 = *src;
		dest1++;
		src++;
		n--;
	}
	return (dest);
}
