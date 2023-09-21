#include "lists.h"

/**
 * free_list - a function that frees a list
 *
 * @head: head
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *n, *next;

	if (!head)
		return;
	n = head;
	while (n)
	{
		next = n->next;
		free(n->str);
		free(n);
		n = next;
	}
}
