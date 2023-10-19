#include "main.h"
#include <string.h>
/**
 * leet - encodes a string into 1337.
 *
 * @s: string to change
 *
 * Return: String
 */
char *leet(char *s)
{
	int i, j, leetCharsLen;
	char leetChar[] = "aAeEoOtTlL";
	char leetNumbers[] = "4433007711";

	leetCharsLen = strlen(leetChar);
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < leetCharsLen; j++)
		{
			if (s[i] == leetChar[j])
			{
				s[i] = leetNumbers[j];
				break;
			}
		}
	}
	return (s);
}
