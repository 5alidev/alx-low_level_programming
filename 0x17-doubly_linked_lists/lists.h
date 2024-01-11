#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
/**
 * struct Node - doubly linked list
 * @n: integer
 * @next: points to the next node
 * @prev: points to the prev node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct Node
{
	int n;
	struct Node *next;
	struct Node *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
#endif /* LISTH_H */