#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: the number.
 *
 * Return: Nothing (void)
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	int shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (i = n, shifts = 0; (i >>= 1) > 0; shifts++)
		;
	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
