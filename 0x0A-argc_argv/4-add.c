#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers.
 *
 * @argc: arg count (number of args)
 * @argv: arg vector (string table)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			char *newArgv;

			newArgv = argv[i];
			for (j = 0; newArgv[j] != '\0'; j++)
			{
				if (newArgv[j] < 48 || newArgv[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
