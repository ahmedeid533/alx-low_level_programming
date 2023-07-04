#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 * @head: pointer
 * @index: position
 * Return: the node
 */
int *delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *traverse;
	listint_t *delete;
	unsigned int i;

	traverse = *head;
	if (index == 0)
	{
		*head = traverse->next;
		free(traverse);
		return (1);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (traverse == NULL)
			return (-1);
		traverse = traverse->next;
		delete = traverse->next;
	}
	traverse->next = delete->next;
	free(delete);
	return (1);
}
