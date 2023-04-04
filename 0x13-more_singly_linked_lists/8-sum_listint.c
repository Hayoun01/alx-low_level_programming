#include "lists.h"
/**
 * sum_listint - a function that returns the sum of
 *		all the data (n) of a listint_t linked list.
 *
 * @head: a linked list;
 *
 * Return: the sum otherwise 0;
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
		sum += head->n;
	return (sum);
}
