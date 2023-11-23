#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 *
 * @n: pointer to number
 * @index: index
 *
 * Return: 1 if worked, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > 64)
		return (-1);
	for (x = 1; index > 0; index--, x *= 2)
		;
	*n += x;
	return (1);
}
