#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: pointer to  the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: Index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	return (binary_search_(array, value, 0, size - 1));
}

/**
 * binary_search_ - helper function
 *
 * @array: array to search in
 * @val: value to search for
 * @left: index of the left
 * @right: index of right
 *
 * Return: index where value is located
 */
int binary_search_(int *array, int val, size_t left, size_t right)
{
	unsigned int i;
	unsigned int mid = left + (right - left) / 2;

	if (left > right)
		return (-1);
	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	if (array[mid] == val)
		return (mid);
	else if (array[mid] > val)
		return (binary_search_(array, val, left, mid - 1));
	else
		return (binary_search_(array, val, mid + 1, right));
}
