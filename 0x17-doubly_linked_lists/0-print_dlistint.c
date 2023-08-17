#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dlistint - print dllist
 * @h: head 
 * Return: size 
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	size_t length;

	current = h;
	length = 0;
	while (current != NULL)
	{
		printf("%i",current->n);
		current = current->next;
		length++;
	}
	return (length);
}