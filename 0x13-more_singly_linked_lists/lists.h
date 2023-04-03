#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
/**
 * struct listint - linked list of int
 *
 * @n: integer;
 * @next: point to the next;
 *
 * Description: Linked list;
 */
typedef struct listint
{
	int n;
	struct listint *next;
} listint_t;
size_t print_listint(const listint_t *h);
#endif
