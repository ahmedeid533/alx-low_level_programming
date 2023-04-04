#include "lists.h"

/**
 * add_nodeint - add at beginning
 * @head: pointer
 * @n: the value
 * Return: the address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = &head;
	head = new;
	return (&new);
}
