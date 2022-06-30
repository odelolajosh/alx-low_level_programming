#include "hash_tables.h"

/**
 * hash_table_create - created a hash table with a definite size
 * @size: size of the hash table
 *
 * Return: pointer to hash table if create otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **arr;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);
	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = NULL;

	ht->size = size;
	ht->array = arr;

	return (ht);
}
