#include "main.h"
/**
 * factorial - Returns factorial of a given number.
 *
 * @n: number to calculate the factorial for.
 *
 * Return: Interger, factorial of @n
 */
int factorial(int n)
{
	int fac = 1;

	if (n < 0)
		return (-1);
	if (n <= 1)
		return (fac);
	fac = n * (factorial(n - 1));
	return (fac);
}
