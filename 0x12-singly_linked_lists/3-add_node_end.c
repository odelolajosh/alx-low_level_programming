#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: head of the list
 * @str: given string
 *
 * Return: pointer to the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;
	int len = 0;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);

	while (*(str + len))
		len++;

	node->len = len;
	node->next = NULL;
	temp = *head;

	if (!temp)
	{
		*head = node;
		return (*head);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = node;

	return (*head);
}
