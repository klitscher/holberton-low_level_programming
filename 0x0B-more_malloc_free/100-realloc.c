#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - Function to reallocate a memory block
 * @ptr: pointer to memory previously allocated
 * @old_size: size (in bytes) of allocated space for ptr
 * @new_size: new size (in bytes) of the memory block
 *
 * Return: A pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
 {
	 unsigned  int i;
	 char *ptr2 = ptr;
	 char *newmem;

	 if (new_size == old_size)
		 return (NULL);
	 newmem = malloc(new_size);
	 if (newmem == NULL)
		 return (NULL);
	 /*Writing contents of ptr to newmem */
	 for (i = 0; i < old_size; i++)
		 newmem[i] = ptr2[i];
	 free(ptr);
	 return(newmem);
 }
