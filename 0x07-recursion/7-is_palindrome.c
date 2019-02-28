#include "holberton.h"

/**
 * is_palindrome - Checks to see if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = endofstr(s);

	if (len == 0)
		return (1);
	return (tester(s, 0, len - 1));
}
/**
 * endofstr - grabs the length of a string
 * @s: String to measure
 *
 * Return: length of the string
 */
int endofstr(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (endofstr(s + 1) + 1);
}

/**
 * tester - tests the begining of the string and the end of the string
 * @s: string to check
 * @t1: begining of string
 * @len: end of string
 *
 * Return: 0 or 1
 */
int tester(char *s, int t1, int len)
{
	if (t1 >= len)
		return (1);
	if (s[t1] != s[len])
	{
		return (0);
	}
	else
	{
		return (tester(s, t1 + 1, len - 1));
	}
}
