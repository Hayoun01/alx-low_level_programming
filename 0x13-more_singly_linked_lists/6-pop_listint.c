#include "lists.h"
/**
 * pop_listint - a function that deletes the head
 *		node of a listint_t linked list,
 *		and returns the head node’s data (n).
 *
 * @head: a linked list;
 *
 * Return: Nothing;
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int i = 0;

	if (head)
	{
		node = (*head)->next;
		i = (*head)->n;
		free(*head);
		*head = node;
		return (i);
	}
	return (i);
}
