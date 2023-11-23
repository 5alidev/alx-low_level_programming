#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 *
 * @n: number
 * @index: index
 *
 * Return: value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int catch;

	if (index > 64)
		return (-1);
	catch = n >> index;
	return (catch & 1);
}
