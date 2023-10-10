#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	char n[] = "_putchar";
	int sizeOfc = sizeof(n);
	int i;

	for (i = 0; i < sizeOfc; i++)
	{
		_putchar(n[i]);
	}	
	_putchar('\n');
	return (0);
}
