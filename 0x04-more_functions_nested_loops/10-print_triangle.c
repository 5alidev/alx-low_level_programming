#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: size of triangle
 *
 * Return: Nothing (void)
 */
void print_triangle(int size)
{
	int i, j, h;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j >= 1; j--)
			{
				_putchar(' ');
			}
			for (h = 1; h <= i; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
