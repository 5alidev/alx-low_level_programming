#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 *
 * @separator: the string to be printed between numbers
 * @n: number of params
 *
 * Return: Nothing (void)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int val;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; ++i)
	{
		val = va_arg(args, int);
		printf("%d", val);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
