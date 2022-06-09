#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: dlistint_t list
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n: new list data
 * Return:  the address of the new element, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *dnode, *current;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	dnode = malloc(sizeof(dlistint_t));
	if (!dnode)
		return (NULL);

	dnode->n = n;

	current = *h;
	if (current != NULL)
		while (current->prev != NULL)
			current = current->prev;

	while (current)
	{
		if (i == idx - 1)
		{
			dnode->next = current->next;
			current->next = dnode;
			dnode->prev = current;
			return (dnode);
		}
		current = current->next;
		i++;
	}

	return (NULL);
}
