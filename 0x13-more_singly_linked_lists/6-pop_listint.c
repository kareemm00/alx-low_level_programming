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
	listint_t *nod;
	int n;

	if (!head || !*head)
		return (0);

	nod = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = nod;
	return (n);

}
