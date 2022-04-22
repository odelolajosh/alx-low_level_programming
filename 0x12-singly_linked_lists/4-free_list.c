#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: head of the list_t list
 */
void free_list(list_t *head)
{
	list_t *tobefreed;

	while ((tobefreed = head))
	{
		head = head->next;
		free(tobefreed->str);
		free(tobefreed);
	}
}
