#include "lists.h"

/**
 * dlistint_len - length
 *
 * @h: the head
 * Return: the size
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current;
	size_t length;

	current = (dlistint_t *)h;
	length = 0;
	while (current != NULL)
	{
		current = current->next;
		length++;
	}
	return (length);
}
