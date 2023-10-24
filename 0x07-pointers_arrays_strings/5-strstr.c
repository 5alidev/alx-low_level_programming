#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring.
 *
 * @haystack: string
 * @needle: string
 *
 * Return: pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
