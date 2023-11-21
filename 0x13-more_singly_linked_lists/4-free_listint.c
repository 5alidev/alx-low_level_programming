#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 *
 * @head: head node
 *
 * Return: Nothing (void)
 */
void free_listint(listint_t *head)
{
	listint_t *freeNode;

	while (head != NULL)
	{
		freeNode = head;
		free(freeNode);
		head = head->next;
	}
}
