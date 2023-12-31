#ifndef _lists_h_
#define _lists_h_
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * struct Node - singly linked list
 * @n: data of type integer
 * @next: pointer to next node
 *
 * Description: singly list node structure
 */
typedef struct Node
{
	int n;
	struct Node *next;
} listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
#endif /* _lists_h_ */
