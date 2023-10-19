#include "main.h"
#include <string.h>
/**
 * _stract - Concatenates two strings.
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: String
 */
char *_stract(char *dest, char *src)
{
	int i, destLen;

	destLen = strlen(dest);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[destLen + i] = src[i];
	}
	dest[destLen + 1] = '\n';
	return (dest);
}
