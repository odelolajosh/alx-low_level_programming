#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head of the dlistint_t list
 * @n: n value of the new node
 * Return: the address of the new element, or `NULL` if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *dnode;

	dnode = malloc(sizeof(dlistint_t));
	if (!dnode)
		return (NULL);

	dnode->n = n;
	dnode->prev = NULL;

	if (*head)
		dnode->next = *head;

	*head = dnode;
	return (dnode);
}
