#include "main.h"
/**
 * print_sign - check if a number
 * is positive, negative or zero
 *
 * @n: number to check it's sign
 * Return: Nothing
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
