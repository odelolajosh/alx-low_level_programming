#include "lists.h"

/**
 * sum_listint - sum all the data (n) of a listint_t linked list
 *
 * @head: head of the linked list
 *
 * Return: sum of all the data (n) of the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
