#include "lists.h"
#include <string.h>
/**
 * free_list - a function that frees a list_t list.
 *
 * @head: linked list.
 *
 * Return: the address of the new element, or NULL if it failed
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
