#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 *
 * @head: head node
 * @index: index of node
 *
 * Return: node at @index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *srchNode = head;

	if (!head)
		return (NULL);
	while (srchNode != NULL)
	{
		if (count == index)
			return (srchNode);
		count++;
		srchNode = srchNode->next;
	}
	return (NULL);
}
