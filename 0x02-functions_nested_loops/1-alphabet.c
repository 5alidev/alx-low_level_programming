#include "main.h"

/**
 * main - prints alphabet from a to z
 *
 * Return: void Nothing.
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
