#include "main.h"

/**
 * main - Entry point
 *
 * @a: the number to computes the absolute for
 * Return: Always 0 (Success)
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
