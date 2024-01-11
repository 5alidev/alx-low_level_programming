#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index.
 * @head: pointer to pointer to head node
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del;
	dlistint_t *temp = *head;
	unsigned int idx = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next == NULL)
			return (-1);
		temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	while (idx < index)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
		idx += 1;
	}
	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	if (temp->next == NULL)
	{
		del = temp->prev;
		del->next = NULL;
		free(temp);
		return (1);
	}
	free(temp);
	return (1);
}
