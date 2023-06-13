#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: pointer of array
 * @height: size
 * Return: void
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
