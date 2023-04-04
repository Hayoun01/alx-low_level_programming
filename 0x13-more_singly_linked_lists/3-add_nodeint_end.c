#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node
 *			at the end of a listint_t list.
 *
 * @head: a linked list;
 * @n: integer;
 *
 * Return: the address of new element;
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(new));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
	}
	return (new);
}
