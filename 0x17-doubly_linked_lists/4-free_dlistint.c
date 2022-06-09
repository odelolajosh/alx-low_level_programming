#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *temp;

	current = head;
	while (current)
	{
		temp = current;
		current = current->next;
		free(temp->prev);
		free(temp);
	}
}
