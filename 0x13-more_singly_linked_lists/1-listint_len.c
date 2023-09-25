#include "lists.h"

/**
 * listint_len -  a function that counts the number of nodes in a linked list
 *
 * @h: head
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		h = h->next;
		k++;
	}

	return (k);
}
