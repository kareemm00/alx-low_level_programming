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
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current_node;

	size_t k;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (k = 0; str[k]; k++)
	{
		;
	}
	new_node->len = k;
	new_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	return (*head);
}
