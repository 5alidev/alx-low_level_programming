#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number
 * of coins to make change for an amount of money.
 *
 * @argc: arg count (number of args)
 * @argv: arg vector (string table)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int coins = 0, param = atoi(argv[1]);

		if (param < 0)
		{
			printf("0\n");
			return (1);
		}
		else
		{
			for (; param >= 0;)
			{
				if (param >= 25)
					param -= 25;
				else if (param >= 10)
					param -= 10;
				else if (param >= 5)
					param -= 5;
				else if (param >= 2)
					param -= 2;
				else if (param >= 1)
					param -= 1;
				else
					break;
				coins += 1;
			}
			printf("%d\n", coins);
		}
	}
	return (0);
}
