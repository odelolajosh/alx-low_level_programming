#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: head of the list
 * @str: given string
 *
 * Return: pointer to the new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int len = 0;
	char *newstr;

	node = malloc(sizeof(list_t));
	if (!node)
		return NULL;

	newstr = strdup(str);
	while (*(newstr + len))
		len++;

	node->str = newstr;
	node->len = len;
	node->next = *head;
	*head = node;

	return (node);
}
