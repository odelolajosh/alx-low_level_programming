#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of the listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	if (head)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
