#include "lists.h"

/**
 * sum_dlistint - summ nodes
 *
 * @head: header
 * Return: summition
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (sum);

	while (head->prev != NULL)
			head = head->prev;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
