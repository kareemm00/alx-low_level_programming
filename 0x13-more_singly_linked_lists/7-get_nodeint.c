#include "lists.h"
/**
 * get_nodeint_at_index -a function that finds a given node in a linked list
 *
 * @head : pointer to the head
 * @index: index of the node
 *
 * Return: pointer to the desired node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nod;
	unsigned int k;

	for (nod = head, k = 0; nod && k < index; nod = nod->next, k++)
		;
	return (nod);
}
