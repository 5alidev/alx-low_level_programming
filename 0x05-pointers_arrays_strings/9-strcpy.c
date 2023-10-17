#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: destination variable
 * @src: source variable
 *
 * Return: pointer to @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, srcLen;

	srcLen = 0;
	while (src[srcLen] != '\0')
		srcLen++;
	for (i = 0; i < srcLen; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
