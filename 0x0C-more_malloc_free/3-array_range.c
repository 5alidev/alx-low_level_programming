#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Creates an array of integers.
 *
 * @min: min value
 * @max: max value
 *
 * Return: Integer Array.
 */
int *array_range(int min, int max)
{
	int *ar = NULL;
	int i, j;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(int) * ((max - min) + 1));
	if (ar == NULL)
		return (NULL);
	j = 0;
	for (i = min; i <= max; i++)
	{
		ar[j] = i;
		j++;
	}
	return (ar);
}
