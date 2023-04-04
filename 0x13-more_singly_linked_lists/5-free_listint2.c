#include "lists.h"

/**
 * free_listint2 - free the list
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *traverse;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		traverse = (*head)->next;
		free(*head);
		*head = traverse;
	}
	head = NULL;
}
