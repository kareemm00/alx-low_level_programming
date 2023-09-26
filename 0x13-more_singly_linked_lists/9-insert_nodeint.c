#include "lists.h"
/**
 * insert_nodeint_at_index - a function that adds a new node
 *
 * @head : pointer to the head
 * @idx  : index of the list
 * @n: num of new node
 *
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *t = *h;
	unsigned int nod;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
	new->next = t;
	*h = new;
	return (new);
	}

	for (nod = 0; nod < (idx - 1); nod++)
	{
	if (t == NULL || t->next == NULL)
		return (NULL);

	t = t->next;
	}

	new->next = t->next;
	t->next = new;

	return (new);
}
