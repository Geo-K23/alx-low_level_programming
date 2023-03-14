#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees the memory of a previously created grid
 * @grid: is a pointer to the 2D array of integers created,
 * by the alloc_grid function
 * @height: is the number of rows in the array
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
