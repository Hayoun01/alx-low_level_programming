#include "lists.h"
/**
 * listint_len - a function that returns the number of
 *		elements in a linked listint_t list.
 *
 * @h: a linked list;
 *
 * Return: the number of elements;
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	for (; h; h = h->next)
		count++;
	return (count);
}
