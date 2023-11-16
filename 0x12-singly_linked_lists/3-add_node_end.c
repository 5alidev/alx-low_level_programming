#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 *
 * @head: pointer to pointer to list
 * @str: field of struct list_t
 *
 * Return: The address of the new element,
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t length = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
		new->next = *head;
	}
	new->str = strdup(str);
	for (length = 0; str[length] != '\0'; length++)
		;
	new->len = length;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	return (new);
}
