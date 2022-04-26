#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of the listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *node = head->next;

	while (head)
	{
		node=head->next;
		free(head);
		head=node;
	}
}
