#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head
 * @n: given integer
 * Return: new address to the element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	node = *head;
	if (!node)
	{
		*head = new;
		return (*head);
	}

	while (node->next)
		node = node->next;

	node->next = new;

	return (*head);
}
