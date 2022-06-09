#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head of the dlistint_t list
 * @n: n value of the new node
 * Return: the address of the new element, or `NULL` if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *dnode, *current;

	dnode = malloc(sizeof(dlistint_t));
	if (!dnode)
		return (NULL);

	dnode->n = n;
	dnode->prev = NULL;

	current = *head;
	while (current && current->prev)
		current = current->prev;

	dnode->next = current;
	if (current)
		current->prev = dnode;

	*head = dnode;
	return (dnode);
}
