#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: dlistint_t
 * @n: new list data
 * Return:  the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *dnode, *current;

	dnode = malloc(sizeof(dlistint_t));
	if (!dnode)
		return (NULL);

	dnode->n = n;

	if (head == NULL || *head == NULL)
	{
		*head = dnode;
		return (dnode);
	}

	current = *head;
	while (current && current->next)
		current = current->next;

	current->next = dnode;
	dnode->prev = current;

	return (dnode);
}
