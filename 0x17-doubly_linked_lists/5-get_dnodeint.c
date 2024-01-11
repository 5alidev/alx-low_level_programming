#include "lists.h"
/**
 * get_dnodeint_at_index - nth node of a dlistint_t linked list.
 * @head: pointer to head node
 * @index: index of the node to search for
 *
 * Return: Node at index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *temp;

	if (index == 0)
		return (head);
	while (head != NULL)
	{
		temp = head;
		idx += 1;
		if (index == idx)
			return (temp);
		head = head->next;
	}
	return (NULL);

}
