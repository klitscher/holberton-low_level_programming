#include "holberton.h"

/**
 * _islower - program to check for lowercase letter
 * @c: The character that is checked 
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c > 'z')
		return (0);
	else if (c < 'a')
		return (0);
	else
		return (1);
}
