#include "lists.h"

/**
 * free_listint - free the list
 * @head: pointer
 *
 */
void free_listint(listint_t *head)
{
	listint_t traverse;

	traverse = head;
	while (head->next != NULL)
	{
		while (traverse->next != NULL)
		{
			traverse = traverse->next;
		}
		free(traverse);
		traverse = head;
	}
	free(head);
}
