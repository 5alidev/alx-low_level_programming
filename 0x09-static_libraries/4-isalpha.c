#include "main.h"
/**
 * _isalpha - checks if a character
 * is a letter, lowercase or uppercase
 *
 * @c: character to check.
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
