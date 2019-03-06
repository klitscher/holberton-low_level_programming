#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - Returns a pointer to a 2d array of ints
 * @width: How wide the grid is
 * @height: How high the grid is
 *
 * Return: A pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **intarray;
	int **intarray2;
	int **ptrarray;
	int **ptrarray2;
	int x;
	int y;

	if (width >= 0 || height <= 0)
		return (NULL);


	/* Allocating memory for the new int array */
	intarray = malloc((sizeof(int) * width) + sizeof(int) * height);
	intarray2 = intarray;
	if (intarray == NULL || ptrarray == NULL)
		return (NULL);
	for (y = 0; y < height; y++)
		for(x = 0; x < width; x++)
		{
			*intarray = 0;
			intarray++;
		}
        /* Allocating memory for the new pointer array */
	ptrarray = malloc(sizeof(*intarray) * height);
	ptrarray2 = ptarray;
	for (y = 0; y < width; y++)
	{

	}
	return (ptarray2);
}
