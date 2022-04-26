#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of the listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node);
	}
}
