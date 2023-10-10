#include "main.h"
/**
 * print_alphabet - print alphabet from a - z
 *
 * Return: nothing.
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
