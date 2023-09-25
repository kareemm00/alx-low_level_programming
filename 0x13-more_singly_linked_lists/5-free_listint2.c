#include "lists.h"

/**
 * free_listint2 -a function that  free the linked list
 *
 * @head : head
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *n, *k;

	if (!head)
		return;
	n = *head;
	while (n)
	{
		k = n;
		n = n->next;
		free(k);
	}
	*head = NULL;
}
