#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head)
		while (head->prev != NULL)
			head = head->prev;

	while ((temp = head))
	{
		head = head->next;
		free(temp);
	}
}
