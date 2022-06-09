#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the dlistint_t list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;
	dlistint_t *current = (dlistint_t *)h;

	while (current)
	{
		printf("%d\n", current->n);
		node_count++;
		current = current->next;
	}

	return (node_count);
}
