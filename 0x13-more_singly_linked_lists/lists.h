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
#endif /* _lists_h_ */