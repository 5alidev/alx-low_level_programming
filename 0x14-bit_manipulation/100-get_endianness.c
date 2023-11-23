#include "main.h"
/**
 * get_endianness - checks the endianness.
 *
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	int number = 1;

	if (*(char *)&number == 1)
		return (1);
	else
		return (0);
}
