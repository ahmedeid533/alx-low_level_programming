#include "lists.h"

/**
 * get_nodeint_at_index - as its name
 * @head: pointer
 * @index: position
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *traverse;
	unsigned int i;

	traverse = head;
	for (i = 0; i < index; i++)
	{
		traverse = traverse->next;
		if (traverse == NULL)
			return (NULL);
	}
	return (traverse);
}
