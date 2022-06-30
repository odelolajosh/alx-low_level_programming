#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: given key
 * @size: size of the array of the hash table
 *
 * Return: index of a given key for a hash table size
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
