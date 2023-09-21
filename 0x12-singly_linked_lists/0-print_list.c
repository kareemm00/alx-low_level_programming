#include "lists.h"

/**
 * _strlen - length of string
 *
 * @s: string
 *
 * Return: length
*/

int _strlen(char *s)
{
	int k = 0;

	if (!s)
		return (0);
	while (*s++)
		k++;
	return (k);
}

/**
 * print_list -a function that  prints all the elements of a list_t list.
 *
 * @h: linked list.
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		k++;
	}
	return (k);
}
