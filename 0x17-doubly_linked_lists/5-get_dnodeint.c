#include "lists.h"

/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 *
 * @head: head
 * @index: index
 * Return: index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *h;

	h = head;
	for (i = 0; i < index; i++)
	{
		if (h == NULL)
			return (NULL);
		h = h->next;
	}
	return (h);
}
