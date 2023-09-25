#include "lists.h"

/**
 * add_nodeint_end -a function that adds a node to the end of a linked list
 *
 * @head: pointer to the head
 * @n: integer
 *
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *k;

	if (!head || !new)
		return (NULL);
	new->next = NULL;
	new->n = n;

	if (!*head)
		*head = new;
	else
	{
		k = *head;
		while (k->next)
			k = k->next;
		k->next = new;
	}
	return (new);

}
