#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: the string to be printed between the strings.
 * @n: number of params.
 *
 * Return: Nothing (void)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; ++i)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			printf("(nil)");
		printf("%s", s);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
