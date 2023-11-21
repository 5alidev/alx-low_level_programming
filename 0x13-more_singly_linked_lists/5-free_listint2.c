#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: head of list
 *
 * Return: Nothing (void)
 */
void free_listint2(listint_t **head)
{
	listint_t *freeNode = NULL;

	if (!head)
		return;
	while (*head != NULL)
	{
		freeNode = (*head);
		*head = (*head)->next;
		free(freeNode);
	}
	*head = NULL;
}
