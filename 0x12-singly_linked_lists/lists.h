#ifndef _lists_h
#define _lists_h
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list - Singly linked list
 * @str: string
 * @len: length of @str
 * @next: pointer to the next node
 *
 * Description: singly linked list struct
 */
typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
#endif /* _lists_h_ */
