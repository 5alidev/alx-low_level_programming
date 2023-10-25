#include "main.h"
#include <string.h>
/**
 * is_palindrome_recursive - helper function
 *
 * @s: string to check
 * @left: left of string
 * @right: right of string
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int left, int right)
{
	if (left >= right)
		return (1);
	if (s[left] != s[right])
		return (0);
	return (is_palindrome_recursive(s, left + 1, right - 1));
}
/**
 * is_palindrome - Checks if a string is palindrome
 *
 * @s: string to check
 *
 * Return: Integer, 1 if @s is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int lenS = strlen(s);

	return (is_palindrome_recursive(s, 0, lenS - 1));
}
