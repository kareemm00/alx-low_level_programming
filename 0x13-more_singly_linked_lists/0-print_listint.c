#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a linked list
 *
 * @h: head
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *c = h;
	size_t i = 0;

	while (c != NULL)
	{
		printf("%d\n", c->n);
		i += 1;
		c = c->next;
	}
	return (i);

}
