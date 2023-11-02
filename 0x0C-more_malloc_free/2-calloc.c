#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array, using malloc.
 *
 * @nmemb: array members
 * @size: size
 *
 * Return: Nothing (void)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ar = NULL;
	unsigned int i;
	size_t total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	ar = malloc(total_size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < total_size; i++)
		((char *)ar)[i] = 0;
	return (ar);
}
