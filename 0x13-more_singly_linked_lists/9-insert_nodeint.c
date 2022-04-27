#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: head
 * @idx: index of the list where the new node should be added
 * @n: new data
 *
 * Return: address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *h;

	h = *head;

	if (h == NULL && idx != 0)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	while (idx > 1 && h)
	{
		h = h->next;
		idx--;
	}

	node->next = h->next;
	h->next = node;

	return (node);
}
