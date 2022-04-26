#include "lists.h"

/**
 * listint_len - counts the number of elements ina linked listint_t
 *
 * @h: pointer to the head of the listint_t list
 *
 * Return: the size of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
		count++, h = h->next;

	return (count);
}
