#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 *
 * @head : head
 *
 * Return: head nodes
 */

int pop_listint(listint_t **head)
{
	listint_t *n;
	int k;

	if (!head || !*head)
		return (0);
	n = (*head)->next;
	k = (*head)->k;
	free(*head);
	*head = n;
	return (k);

}
