#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string.
 *
 * @s: string to reverse.
 *
 * Return: Nothing (void)
 */
void rev_string(char *s)
{
	int i, j, length;
	char temp;

	length = strlen(s);
	for (i = 0; j = length - 1; i < j; i++; j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
