#include "main.h"
/**
 * find_sqrt - helper function to find the sqrt
 *
 * @n: the original number for which the sqrt is sought
 * @guess: current guess for the sqrt
 *
 * Return: sqrt of @n
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (find_sqrt(n, guess + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: nubmer to calculate the square for.
 *
 * Return: Square root of @n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_sqrt(n, 1));
}
