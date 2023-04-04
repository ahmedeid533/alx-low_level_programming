#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print list and n
 * @h: header pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number_of_elemnts = 0;
	listint_t *itrator;

	itrator = h;
	while (itrator != NULL)
	{
		printf("%d\n", itrator->n);
		number_of_elemnts++;
		itrator = itrator->next;
	}
	return (number_of_elemnts);
}
