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
	int i, j, sLen;

	sLen = strlen(s);
	for (i = 0; i < sLen; i++)
	{
		if (s[i] == ' ' || s[i] == ',' || s[i] == ';' || s[i] == '.'
				|| s[i] == '!' || s[i] == '?' || s[i] == '\"'
				|| s[i] == '(' || s[i] == ')' || s[i] == '{'
				|| s[i] == '}')
		{
			j = i + 1;
			while (s[j] != '\0' && !((s[j] >= 'a' && s[j] <= 'z')
						|| (s[j] >= 'A' && s[j] <= 'Z')))
				j++;
			if (s[j] != '\0')
			{
				if (s[j] >= 'a' && s[j] <= 'z')
					s[j] = s[j] - 'a' + 'A';
			}
		}
	}
	return (s);
}
