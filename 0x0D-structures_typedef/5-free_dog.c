#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees all the memory
 * @d: Struct to be freed
 *
 * Return - void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
