#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: variable to allocate memory for.
 *
 * Return: Nothing (Void)
 */
void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
