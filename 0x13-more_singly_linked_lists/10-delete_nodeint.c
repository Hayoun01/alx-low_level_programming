#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of
 *				a listint_t linked list.
 *
 * @head: a linked list;
 * @index: index;
 *
 * Return: 1 if successful otherwise -1;
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *pre;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	cur = *head;
	pre = NULL;

	for (i = 0; cur && i < index; i++)
	{
		pre = cur;
		cur = cur->next;
	}
	if (cur == NULL)
		return (-1);
	if (pre == NULL)
		*head = cur->next;
	else
		pre->next = cur->next;
	free(cur);
	return (1);
}

