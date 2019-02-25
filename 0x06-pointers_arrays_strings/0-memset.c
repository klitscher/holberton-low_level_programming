#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: byte to filled in
 * @n: Aamount of memory to be filled
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *s1 = s;

	while (n > 0)
	{
		*s1 = b;
		s1++;
		n--;
	}
	return (s);
}
