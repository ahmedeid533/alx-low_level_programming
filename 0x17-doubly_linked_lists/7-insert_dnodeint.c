#include "lists.h"

/**
 * insert_dnodeint_at_index - as it is
 *
 * @h: header
 * @idx: the index
 * @n: the value
 * Return: the node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *head;
	dlistint_t *new;

	head = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; i < idx; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	if (head->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = head;
	new->prev = head->prev;
	head->prev = new;
	return (new);
}
