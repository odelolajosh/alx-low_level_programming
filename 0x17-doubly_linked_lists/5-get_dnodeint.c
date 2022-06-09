#include "lists.h"

/**
 * get_dnodeint_at_index - the nth node of a dlistint_t linked list.
 * @head: dlistint_t list
 * @index: index of the node, starting from 0
 * Return: the node at index if it exist otherwise return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;

	current = head;
	while (current)
	{
		if (index == i)
			return (current);
		current = current->next;
		i++;
	}

	return (NULL);
}
