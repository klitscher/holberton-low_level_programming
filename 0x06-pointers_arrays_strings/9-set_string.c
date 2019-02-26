#include "holberton.h"

/**
 * set_string - sets a value of a pointer to a char
 * @s: pointer to a pointer
 * @to: another pointer
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
