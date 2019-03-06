#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - Free's up the allocated memory
 * @grid: grid to free
 * @height: height to free
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
