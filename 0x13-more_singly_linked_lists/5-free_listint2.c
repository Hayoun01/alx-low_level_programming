#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 *
 * @head: a linked list;
 *
 * Return: Nothing;
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head)
	{
		while (*head)
		{
			node = (*head)->next;
			free(*head);
			*head = node;
		}
		*head = NULL;
	}
}
