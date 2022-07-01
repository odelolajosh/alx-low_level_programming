#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key - key cannot be an empty string
 * @value: value associated with key
 *
 * Return: 1 if success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *current;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0') /* Key cannot be an empty string */
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->value = strdup(value);
	node->key = strdup(key);
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
