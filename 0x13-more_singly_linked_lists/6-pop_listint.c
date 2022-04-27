#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a listint_t linked list
 *
 * @head: head of the list
 *
 * Return: the removed node data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *next;

	if (*head == NULL)
		return (0);

	n = (*head)->n;

	next = (*head)->next;

	free(*head);

	*head = next;

	return (n);
}
