#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: pointer to list
 * @str: field of struct list_t
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
		new->next = *head;
	}
	new->next = *head;
	*head = new;
	new->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	new->len = i;
	return (*head);
}
