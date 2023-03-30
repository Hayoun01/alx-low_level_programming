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
#endif
