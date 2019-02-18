#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *ptrf = s;
	char *ptrb = s;
	int temp;

	while (*ptrb != '\0')
	{
		ptrb++;
	}
	ptrb--;
	while (ptrf <= ptrb)
	{
		temp = *ptrb;
		*ptrb = *ptrf;
		*ptrf = temp;
		ptrf++;
		ptrb--;
	}
}
