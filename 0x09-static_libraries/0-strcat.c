#include "main.h"
#include <string.h>
/**
 * _strcat - Concatenates two strings.
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: String
 */
char *_strcat(char *dest, char *src)
{
	int i, destLen;

	destLen = strlen(dest);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[destLen + i] = *(src + i);
	}
	dest[destLen + i] = '\0';
	return (dest);
}
