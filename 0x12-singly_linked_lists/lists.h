#ifndef _lists_h
#define _lists_h
#include <stdio.h>
#include <stddef.h>
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
#endif /* _lists_h_ */
