#include "hash_tables.h"

/**
 * insert_to_sdllist - add a node to a sorted doubly linked list
 * @ht: hash table
 * @node: the node to insert
 */
void insert_to_sdllist(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *current;
	int cmp;

	current = ht->shead;
	while (current)
	{
		cmp = strcmp(node->key, current->key);
		if (cmp == 0) /* is node->key == current->key */
		{
			return;
		}
		else if (cmp < 0) /* is node->key > current->key */
		{
			if (current->sprev)
				current->sprev->snext = node;
			else /* else current == ht->shead */
				ht->shead = node;

			node->sprev = current->sprev;
			node->snext = current;
			current->sprev = node;
			return;
		}
		current = current->snext;
	}

	if (ht->shead == NULL)
	{
		ht->shead = node;
	}
	else
	{
		node->sprev = ht->stail;
		ht->stail->snext = node;
	}
	ht->stail = node;
}

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the table
 *
 * Return: hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_node_t **array;
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	array = malloc(sizeof(shash_node_t *) * size);
	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;
	ht->array = array;
	ht->size = size;

	return (ht);
}

/**
 * shash_table_set - adds an element to the hash table.
 * @ht: hash table to add or update key/value
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded otherwise 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *current;

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

	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (0);

	node->value = strdup(value);
	node->key = strdup(key);
	node->next = ht->array[index];
	node->snext = node->sprev = NULL;
	ht->array[index] = node;

	insert_to_sdllist(ht, node);

	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: given hash table
 * @key: given key
 *
 * Return: value associated with the element,
 * or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints a hash table
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	char *sep = "";

	if (ht == NULL)
		return;

	current = ht->shead;
	printf("{");
	while (current)
	{
		printf("%s'%s': '%s'", sep, current->key, current->value);
		sep = ", ";
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table in reverse order
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	char *sep = "";

	if (ht == NULL)
		return;

	current = ht->stail;
	printf("{");
	while (current)
	{
		printf("%s'%s': '%s'", sep, current->key, current->value);
		sep = ", ";
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->shead;
	while (ht->shead)
	{
		ht->shead = ht->shead->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = ht->shead;
	}
	free(ht->array);
	free(ht);
}
