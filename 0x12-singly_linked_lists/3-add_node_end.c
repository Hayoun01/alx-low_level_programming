#include "lists.h"
#include <string.h>
/**
 * add_node_end - a function that adds a new node
 *		at the end of a list_t list.
 *
 * @head: linked list.
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *end;

	new = malloc(sizeof(new));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(new->str);
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		end = *head;
		while (end->next)
			end = end->next;
		end->next = new;
	}
	return (new);
}
