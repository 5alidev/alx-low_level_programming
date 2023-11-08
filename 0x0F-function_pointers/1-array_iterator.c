#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 *
 * @size: size of array.
 * @action: pointer to the function
 * @array: array to iterate
 *
 * Return: Nothing (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
