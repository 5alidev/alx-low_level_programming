#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: variable to extract the last digit from
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	int lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
