#include "lists.h"
#include <stddef.h>
/**
 * listint_len - print list and n
 * @h: header pointer
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number_of_elemnts = 0;

	while (h != NULL)
	{
		number_of_elemnts++;
		h = h->next;
	}
	return (number_of_elemnts);
}
