#include "lists.h"
#include <stdio.h>

size_t loop_int(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * loop_int - Counts the number of unique nodes
 *
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t loop_int(const listint_t *head)
{
	const listint_t *rot, *var;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	rot = head->next;
	var = (head->next)->next;

	while (var)
	{
		if (rot == var)
		{
			rot = head;
			while (rot != var)
			{
				nodes++;
				rot = rot->next;
				var = var->next;
			}

			rot = rot->next;
			while (rot != var)
			{
				nodes++;
				rot = rot->next;
			}

			return (nodes);
		}

		rot = rot->next;
		var = (var->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = loop_int(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
