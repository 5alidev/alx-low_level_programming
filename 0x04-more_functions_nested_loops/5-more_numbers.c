#include "main.h"
/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Return: Nothing (void)
 */
void more_numbers(void)
{
	int i, j, t, u;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			t = j / 10;
			u = j % 10;
			if (j > 9)
				_putchar(t + '0');
			
			_putchar(u + '0');
		}
		_putchar('\n');
	}
}
