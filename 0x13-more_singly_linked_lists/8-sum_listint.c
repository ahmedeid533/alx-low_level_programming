#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t
 * @head: pointer to head
 * Return: summition
 */
int sum_listint(listint_t *head)
{
	listint_t *traverse;
	int sum = 0;

	traverse = head;
	while (traverse != NULL)
	{
		sum += traverse->n;
		traverse = traverse->next;
	}
	return (sum);
}
