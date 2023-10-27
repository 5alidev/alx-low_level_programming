#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @a: the number to computes the absolute for
 * Return: abs value of @a
 */
int _abs(int a)
{
	if (a > 0)
	{
		return (a);
	}
	else if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (0);
	}
}
