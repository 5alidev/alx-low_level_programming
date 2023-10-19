#include "main.h"
#include <string.h>
/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: character to change
 *
 * Return: String.
 */
char *cap_string(char *s)
{
	int i, sLen;

	sLen = strlen(s);
	for (i = 0; i < sLen; i++)
	{
		if (s[i] == ' ' || s[i] == ',' || s[i] == ';' || s[i] == '.'
				|| s[i] == '!' || s[i] == '?' || s[i] == '\"'
				|| s[i] == '(' || s[i] == ')' || s[i] == '{'
				|| s[i] == '}')
		{
			if ((s[i + 1] >= 'a' && s[i + 1] <= 'z')
					|| (s[i + 1] >= 'A' && s[i + 1] <= 'Z'))
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	if ((s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z'))
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] = s[0] - 32;
	return (s);
}
