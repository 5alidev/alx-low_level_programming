#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: seconde string
 * Return: Concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat = NULL;
	int sizeS1, sizeS2, count = 0;

	unsigned int i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	for (sizeS1 = 0; s1[sizeS1] != '\0'; sizeS1++)
		;
	for (sizeS2 = 0; s2[sizeS2] != '\0'; sizeS2++)
		;
	concat = malloc(sizeof(char) * (sizeS1 + sizeS2) + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}
	for (; s2[count] != '\0'; i++)
	{
		concat[i] = s2[count];
		count++;
	}
	return (concat);
}
