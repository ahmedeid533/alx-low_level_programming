#include "lists.h"

/**
 * list_len - print linked list len
 * @h: the node
 * Return: the size of the list
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;
	const list_t *head = h;

	while (head != NULL)
	{
		head = head->next;
		counter++;
	}

	return (counter);
}
