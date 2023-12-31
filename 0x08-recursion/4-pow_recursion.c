#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 *
 * @x: first value
 * @y: second value
 *
 * Return: Integer, returns the value of @x raised to the power of @y.
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	pow = x * (_pow_recursion(x, y - 1));
	return (pow);
}
