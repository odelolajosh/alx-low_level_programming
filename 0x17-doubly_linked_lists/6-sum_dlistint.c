#include "lists.h"

/**
 * sum_dlistint - sum all the data of a dlistint_t linked list
 * @head: dlistint_t list
 * Return: the sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
