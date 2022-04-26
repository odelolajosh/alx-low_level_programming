#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: head of the linked list
 * @index: index
 *
 * Return: the nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while ((index--) > 0 && head != NULL)
	{
		head = head->next;
	}

	return (head);
}
