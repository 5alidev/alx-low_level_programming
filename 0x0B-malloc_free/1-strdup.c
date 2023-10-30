#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter.
 *
 * @str: the string to make copy of.
 *
 * Return: Pointer to new allocated memory.
 */
char *_strdup(char *str)
{
	char *copy = NULL;

	unsigned int i;
	int size;

	for (size = 0; str[size] != '\0'; size++)
		;
	copy = malloc(sizeof(char) * size + 1);
	if (copy != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			copy[i] = str[i];
		}
	}
	else
	{
		return (NULL);
	}
	copy[i] = '\0';
	return (copy);
}
