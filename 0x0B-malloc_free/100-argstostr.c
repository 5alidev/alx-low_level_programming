#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of the program.
 *
 * @ac: arg count (number of args)
 * @av: arg vector (string table)
 *
 * Return: Pointer to a new string,
 * or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *concat = NULL;

	int i, j, k, alloc;

	k = 0;
	alloc = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			alloc++;
	}
	alloc += ac;
	concat = (char *)malloc(sizeof(char) * (alloc + 1));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat[k] = av[i][j];
			k++;
		}
		concat[k] = '\n';
		k++;
	}
	concat[k] = '\0';
	return (concat);
}
