#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings.
 *
 * @dest: destination string
 * @src: source string
 * @n: how many bytes to use in src
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, destLen;

	destLen = strlen(dest);
	for (i = 0; src[i] != src[n]; i++)
	{
		dest[destLen + i] = src [i];
	}
	dest[destLen + i] = '\0';
	return (dest);
}
