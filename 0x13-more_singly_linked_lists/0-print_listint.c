#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - print list and n
 * @h: header pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number_of_elemnts = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		number_of_elemnts++;
		h = h->next;
	}
	return (number_of_elemnts);
}
