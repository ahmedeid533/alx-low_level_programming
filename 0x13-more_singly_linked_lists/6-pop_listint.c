#include "lists.h"

/**
 * pop_listint - act as stack
 * @head: pointer
 * Return: node data
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	value = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (value);
}
