#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node by a given index
 *
 * @head : pointer to the head
 * @index: index of the node
 *
 * Return: 1 - if function succeeds,-1 - if function fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t, *cpy = *head;
	unsigned int nod;

	if (cpy == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(cpy);
	return (1);
	}

	for (nod = 0; nod < (index - 1); nod++)
	{
	if (cpy->next == NULL)
		return (-1);

	cpy = cpy->next;
	}

	t = cpy->next;
	cpy->next = t->next;
	free(t);
	return (1);
}
