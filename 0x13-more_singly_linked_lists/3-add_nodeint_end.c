#include "lists.h"

/**
 * add_nodeint_end - add at end
 * @head: pointer
 * @n: the value
 * Return: the address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *traverse;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	traverse = *head;
	while (traverse->next != NULL)
	{
		traverse = traverse->next;
	}
	traverse->next = new;
	new->n = n;
	new->next = NULL;
	return (new);
}
