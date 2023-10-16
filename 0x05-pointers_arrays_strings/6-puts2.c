#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line
 *
 * @str: string variable
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int i, length;

	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		if (str[i] != '\0')
		{
			if (i % 2 == 0)
				_putchar(str[i]);
		}
	}
	_putchar('\n');
}
