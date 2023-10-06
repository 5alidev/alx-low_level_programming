#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 97;

	while (a <= 122)
	{
		if (a != 101 && a != 113)
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
