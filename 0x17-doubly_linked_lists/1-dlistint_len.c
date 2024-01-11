#include "lists.h"
/**
 * dlistint_len - number of elements in a D-linked list
 * @h: pointer to head node
 *
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		length += 1;
		h = h->next;
	}
	return (length);
}
