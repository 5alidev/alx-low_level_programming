#include "main.h"
#include <stdio.h>
/**
 * print_array -  prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: array
 * @n: size of array
 *
 * Return: Nothing (void)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", *(a + (n - 1)));
		else
			printf("%d, ", *(a + i));
	}
	printf("\n");
}
