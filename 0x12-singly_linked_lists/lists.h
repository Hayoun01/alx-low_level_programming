#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
/**
 * struct linked - linked list
 * @str: string
 * @len: len of the string
 * @next: point the next node
 * Description: Linked list
 */
typedef struct linked
{
	char *str;
	unsigned int len;
	struct linked *next;
} list_t;
	size_t print_list(const list_t *h);
	size_t list_len(const list_t *h);
	list_t *add_node(list_t **head, const char *str);
	list_t *add_node_end(list_t **head, const char *str);
	void free_list(list_t *head);
#endif
