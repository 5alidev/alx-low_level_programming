#include "main.h"
#include <string.h>
/**
 * _puts -  prints a string, followed by a new line
 *
 * @str: string to print
 *
 * Return: Nothing (void)
 */
void _puts(char *str)
{
	int i, strLen;

	strLen = strlen(str);
	for (i = 0; i < strLen; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
