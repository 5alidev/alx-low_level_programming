#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: array size
 * @c: the specific char
 *
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *t = NULL;

	if (size == 0)
		return (NULL);
	t = malloc(sizeof(char) * size);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}
}
