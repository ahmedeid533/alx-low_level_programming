#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 * @head: pointer
 * @index: position
 * Return: the node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *traverse;
	listint_t *delete;
	unsigned int i;

	traverse = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = traverse->next;
		free(traverse);
		return (1);
	}
	delete = traverse->next;
	for (i = 0; i < (index - 1); i++)
	{
		traverse = traverse->next;
		delete = traverse->next;
		if (traverse == NULL || delete == NULL)
			return (-1);
	}
	traverse->next = delete->next;
	free(delete);
	return (1);
}
