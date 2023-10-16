#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 *
 * @a: first variable to swap
 * @b: seconde variable to swap
 *
 * Return: Nothing (void)
 */
void swap_int(int *a, int *b)
{
	int helper;

	helper = *a;
	*a = *b;
	*b = helper;
}
