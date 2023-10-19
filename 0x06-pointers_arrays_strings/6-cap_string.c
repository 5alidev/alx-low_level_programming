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
		if (s[i] == ' ' || s[i] == ',' || s[i] == ';' || s[i] == '.' ||
			s[i] == '!' || s[i] == '?' || s[i] == '\"' || s[i] == '(' ||
			s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			int j = i + 1;

			while (s[j] != '\0' && !(('a' <= s[j] && s[j] <= 'z')
						|| ('A' <= s[j] && s[j] <= 'Z')))
			{
				j++;
			}
			if (s[j] != '\0')
			{
				if ('a' <= s[j] && s[j] <= 'z')
				{
					s[j] = s[j] - ('a' - 'A');
				}
			}
		}
	}
	return (s);
}
