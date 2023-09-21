#include "lists.h"
/**
 * add_node - a function that adds a new node at the beginning
 * of a list_t list.
 *
 * @head: head of linked list.
 * @str: string
 *
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	size_t k;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (k = 0; str[k]; k++)
	{
		;
	}
	new_node->len = k;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
