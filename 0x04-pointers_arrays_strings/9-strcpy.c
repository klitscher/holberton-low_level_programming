#include "holberton.h"

/**
 * _strcpy - duplicate strcpy
 * @dest: string the copied string goes into
 * @src: the string to copy
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	for (; *src != '\0'; src++, dest++)
	{
		*dest = *src;
	}
	return (temp);
}
