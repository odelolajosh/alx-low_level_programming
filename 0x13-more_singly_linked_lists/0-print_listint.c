#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: pointer to the head of the listint_t list
 *
 * Return: the size of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
