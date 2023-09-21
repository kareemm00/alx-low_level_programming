#include "lists.h"
/**
 * add_node_end - a function that adds
 *a new node at the end of a list_t list.
 *
 * @head: head of linked list.
 * @str: string
 *
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *current;

	size_t k;

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (k = 0; str[k]; k++)
	{
		;
	}
	new->len = k;
	new->next = NULL;
	current = *head;

	if (current == NULL)
	{
		*head = new;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	return (*head);
}
