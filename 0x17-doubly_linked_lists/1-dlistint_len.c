#include "lists.h"

/**
 * dlistint_len - return the number of elements in a linked dlistint_t list
 * @h: head of the dlistint_t list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;
	dlistint_t *current = (dlistint_t *)h;

	while (current)
	{
		node_count++;
		current = current->next;
	}

	return (node_count);
}
