#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * @c: character to test.
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
