
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index of a listint_t
 * linked list
 *
 * @head: head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if success otherwise return -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *next;

	
	prev = *head;
	
	if (index == 0)
	{
		next = prev->next;
		free(prev);
		*head = next;
		return (1);
	}

	while (index > 1 && prev)
	{
		prev = prev->next;
		index--;
	}

	if (prev && (next = prev->next) != NULL)
	{
		prev->next = next->next;
		free(next);
		return (1);
	}

	return (-1);
}
