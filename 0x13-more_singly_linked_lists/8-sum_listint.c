#include "lists.h"
/**
 * sum_listint - a function that calculates the sum of all the data
 *
 * @head : pointer to the head
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
