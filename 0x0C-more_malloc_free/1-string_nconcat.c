#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: first string
 * @s2: seconde string
 * @n: characters to concatenates
 *
 * Return: Always 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1Len = 0;
	unsigned int s2Len = 0;
	char *concat = NULL;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1Len = 0; s1[s1Len] != '\0'; s1Len++)
		;
	for (s2Len = 0; s2[s2Len] != '\0'; s2Len++)
		;
	if (n >= s2Len)
		n = s2Len;
	concat = malloc(sizeof(char) * (s1Len + n + 1));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < s1Len; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j <= s2Len; j++)
		concat[i++] = s2[j];
	concat[j] = '\0';
	return (concat);

}
