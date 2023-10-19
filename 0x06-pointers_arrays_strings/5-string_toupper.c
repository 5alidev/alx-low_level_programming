#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase.
 *
 * Return: String with uppercase
 */
char *string_toupper(char *s)
{
	int i, sLen;

	sLen = strlen(s);
	for (i = 0; i < sLen; i++)
	{
		if(islower(s[i]))
			s[i] = s[i] - 32;
	}
	return (s);
}
