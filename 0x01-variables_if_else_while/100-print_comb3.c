#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, num2;

	for (num = 0; num <= 8; num++)
	{
		for (num2 = num + 1; num2 <= 9; num2++)
		{
			putchar('0' + num);
			putchar('0' + num2);
			if (num != 8 || num2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
