#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num = 48;
	char alphabet = 65;
	
	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	while (alphabet <= 70)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
