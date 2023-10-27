#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 *
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
