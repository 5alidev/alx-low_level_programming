#include "main.h"
/**
 * flip_bits - Returns the number of bits you would
 * need to flip to get from one number to another.
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	int count;

	x = n ^ m;
	count = 0;
	while (x)
	{
		count++;
		x &= (x - 1);
	}
	return (count);
}
