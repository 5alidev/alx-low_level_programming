#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: string to reverse
 *
 * Return: Nothing (void)
 */
void print_rev(char *s)
{
	int i, strLen;

	strLen = strlen(s);
	for (i = strLen - 1; i <= 0; i--)
	{
		if (s[i] != '\0')
			_putchar(s[i]);
	}
	_putchar('\n');
}
