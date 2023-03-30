#include "lists.h"
#include <stdio.h>
/**
 * list_len - a function that returns the number
 *		of elements in a linked list_t list.
 *
 * @h: linked list.
 *
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
