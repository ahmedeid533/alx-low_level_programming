#include "lists.h"

/**
 * print_list - print linked list
 * @h: the node
 * Return: the size of the list
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;
	list_t *head = h;

	while (head != "\0")
	{
		printf("[%lu] %s", sizeof(head->str), head->str);
		head = head->next;
		counter++;
	}

	return (counter);
}
