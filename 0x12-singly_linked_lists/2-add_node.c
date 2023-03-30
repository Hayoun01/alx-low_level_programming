#include "lists.h"
#include <string.h>
/**
 * add_node - a function that adds a new node
 *		at the beginning of a list_t list.
 *
 * @head: linked list.
 * @str: string
 *
 * Return: the number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

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
	new->next = *head;
	*head = new;
	return (new);
}
