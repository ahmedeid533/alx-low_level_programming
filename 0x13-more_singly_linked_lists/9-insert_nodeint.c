#include "lists.h"

/**
 * insert_nodeint_at_index - zero nero lol
 * @head: pointer
 * @idx: position
 * @n: the value
 * Return: the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *traverse;
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	traverse = *head;
	for (i = 0; i < idx; i++)
	{
		if (traverse == NULL)
			return (NULL);
		traverse = traverse->next;
	}
	new->next = traverse->next;
	traverse->next = new;
	return (new);
}
