#include <stdio.h>
/**
 * main - program that prints its name,
 * followed by a new line.
 *
 * @argc: arg count
 * @argv: arg vector (array of strings)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
