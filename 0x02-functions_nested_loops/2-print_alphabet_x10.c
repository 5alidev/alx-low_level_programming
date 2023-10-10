#include "main.h"
/**
 * print_alphabet_x10 - print alphabet a - z 10 times
 *
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int i = 10;
	char alpha = 'a';

	while (i < 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		i++;
		_putchar('\n');
	}
}
