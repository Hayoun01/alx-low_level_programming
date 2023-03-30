#include "lists.h"
#include <stdio.h>
/**
 * print_list - a function that prints all the elements of a list_t list.
 *
 * @h: linked list.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		count++;
	}
	return (count);
}
