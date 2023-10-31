#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Frees a 2 dimensional grid previously
 * created by my alloc_grid function.
 *
 * @grid: the grid to be free
 * @height: height of the grid
 *
 * Return: Nothing (void)
 */
void free_grid(int **grid, int height)
{
	int *t;
	int i;

	for (i = 0; i < height; i++)
	{
		t = grid[i];
		free(t);
	}
	free(grid);
}
