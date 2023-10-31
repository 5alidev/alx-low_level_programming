#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a
 * 2 dimensional array of integers.
 *
 * @width: width of the 2 dimensional array
 * @height: height of the 2 dimensional array
 *
 * Return: Always 0 (Success)
 */
int **alloc_grid(int width, int height)
{
	int **t = NULL;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	t = (int **)malloc(sizeof(int *) * height);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		t[i] = (int *)malloc(sizeof(int) * width);
		if (t[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(t[j]);
			free(t);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			t[i][j] = 0;
	}
	return (t);
}
