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
	for (i = strLen; i <= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
