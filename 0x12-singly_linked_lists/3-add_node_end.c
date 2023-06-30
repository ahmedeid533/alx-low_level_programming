#include "lists.h"

/**
 * add_node - append in front of list
 * @head: head of the list
 * @str: the node text
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last = *head;
	list_t *new;

	if (last == NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;
		*head = new;
		return (new);
	}


	while (last->next != NULL)
		last = last->next;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	last->next = new;
	return (new);
}
