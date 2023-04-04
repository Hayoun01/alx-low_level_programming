#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a
 *			new node at a given position.
 *
 * @head: a linked list;
 * @idx: index;
 * @n: a number;
 *
 * Return: the sum otherwise 0;
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}
	while (i < (idx - 1))
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
		i++;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
