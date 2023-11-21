#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: head node pointer
 * @n: data
 *
 * Return: New node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = NULL;
	listint_t *last = NULL;

	newNode = malloc(sizeof(struct Node));
	last = *head;

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = newNode;
	return (newNode);
}
