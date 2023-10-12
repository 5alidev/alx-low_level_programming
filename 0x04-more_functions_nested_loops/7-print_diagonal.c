#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: number of times the character \ should be printed
 *
 * Return: Nothing (void)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i <= n; i++)
	{
		if (i > 1)
		{
			for (j = 1; j <= i - 1; j++)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
}
