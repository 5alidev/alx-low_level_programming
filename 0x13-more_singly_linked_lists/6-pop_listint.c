#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 *
 * @head: head to delete
 *
 * Return: data (number)
 */
int pop_listint(listint_t **head)
{
	int number;
	listint_t *temp;

	if (!head || !(*head))
		return (0);
	temp = (*head);
	number = temp->n;
	*head = temp->next;
	free(temp);
	return (number);
}
