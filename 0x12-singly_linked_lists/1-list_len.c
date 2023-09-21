#include "lists.h"

/**
 * list_len -  a function that returns
 *the number of elements in a linked list_t list.
 *
 * @h: linked list.
 *
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		h = h->next;
		k++;
	}
	return (k);
}
