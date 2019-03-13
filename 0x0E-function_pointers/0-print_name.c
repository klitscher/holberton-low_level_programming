#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Function to print out a name
 * @name: name to print out
 * @f: pointer to a function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	else
		f(name);
}
