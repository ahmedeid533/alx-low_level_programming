#include "lists.h"

/**
 * print_list - print linked list
 * @h: the node
 * Return: the size of the list
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *head = h;

	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", head->len, head->str);
		head = head->next;
		counter++;
	}

	return (counter);
}
