#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the
 * two diagonals of a square matrix of integers.
 *
 * @a: multi dim array
 * @size: size of array
 *
 * Return: Nothing (void)
 */
void print_diagsums(int *a, int size)
{
	int i, firstDiag = 0, secDiag = 0;

	for (i = 0; i < size; i++)
	{
		firstDiag += a[i * size + i];
		secDiag += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", firstDiag, secDiag);
}
