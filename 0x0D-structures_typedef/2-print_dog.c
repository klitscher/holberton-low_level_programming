#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * print_dog - prints a struct dog
 * @d: structure to print
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("(nil)");
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("0.000000");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)");
	else
		printf("Owner: %s\n", d->owner);
}
