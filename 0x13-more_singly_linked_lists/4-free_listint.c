#include "lists.h"

/**
 * free_listint - free the list
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *traverse;

	while (head != NULL)
	{
		traverse = head->next;
		free(head);
		head = traverse;
	}
}
