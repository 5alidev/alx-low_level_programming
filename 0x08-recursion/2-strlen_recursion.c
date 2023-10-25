#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 *
 * @s: string to calculate the length for
 *
 * Return: Integer, length of @s
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return (0);
	len = _strlen_recursion(s + 1);
	return (len + 1);
}
