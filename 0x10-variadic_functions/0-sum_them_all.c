#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: number of params
 *
 * Return: the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int val;
	int sum = 0;
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; ++i)
	{
		val = va_arg(args, int);
		sum += val;
	}
	va_end(args);
	return (sum);
}
