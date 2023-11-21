#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: pointer to pointer to head node
 * @idx: index to insert the new node
 * @n: data - number
 *
 * Return: inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *temp = (*head);
	unsigned int count = 0;

	newNode = malloc(sizeof(struct Node));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (idx == 0)
	{
		newNode->next = (*head);
		(*head) = newNode;
		return (newNode);
	}
	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		count++;
		temp = temp->next;
	}
	free(newNode);
	return (NULL);
}
