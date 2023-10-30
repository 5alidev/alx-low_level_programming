#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

	int i, strLength = strlen(str);

	if (str == NULL)
		return (NULL);
	copy = malloc(sizeof(char) * strLength + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strLength; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
