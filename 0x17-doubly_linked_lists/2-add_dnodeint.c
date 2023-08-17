#include "lists.h"

/**
 * add_dnodeint - add node
 *
 * @head: head pointer
 * @n: the new node value
 * Return: new node pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	*head->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}