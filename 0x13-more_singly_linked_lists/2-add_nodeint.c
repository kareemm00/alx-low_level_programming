#include "lists.h"

/**
 * add_nodeint -a function that  adds a node to the beginning of a linked list
 *
 * @head: pointer to the head
 * @n: integer
 *
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!head || !new)
		return (NULL);
	new->next = NULL;
	new->n = n;

	if (*head)
		new->next = *head;
	*head = new;
	return (new);
}
