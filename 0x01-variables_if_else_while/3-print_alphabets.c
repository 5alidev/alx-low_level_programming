#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char minA = 97;
	char maxA = 65;

	while (minA <= 122)
	{
		putchar(minA);
		minA++;
	}
	while (maxA <= 90)
	{
		putchar(maxA);
		maxA++;
	}
	putchar('\n');
	return (0);
}
