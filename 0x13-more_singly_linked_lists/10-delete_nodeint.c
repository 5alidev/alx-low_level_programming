#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at
 * index of a listint_t linked list.
 *
 * @head: pointer to pointer to head node
 * @index: index of node to delete
 *
 * Return: 1 if succeeded, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	curr = (*head);
	prev = NULL;
	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}
	for (count = 0; curr != NULL && count < index; count++)
	{
		prev = curr;
		curr = curr->next;
	}
	if (curr == NULL)
		return (-1);
	prev->next = curr->next;
	free(curr);
	return (1);
}
