#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest1 = dest;
	char *src1 = src;
	int len = 0;

	while (*dest1)
	{
		dest1++;
	}
	while (*src1)
	{
		src1++;
		len++;
	}
	while (len >= 0)
	{
		*dest1 = *src;
		dest1++;
		src++;
		len--;
	}
	return (dest);
}
