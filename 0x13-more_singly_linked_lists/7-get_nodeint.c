#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns
 *		the nth node of a listint_t linked list.
 *
 * @head: a linked list;
 * @index: index;
 *
 * Return: a node otherwise NULL;
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
