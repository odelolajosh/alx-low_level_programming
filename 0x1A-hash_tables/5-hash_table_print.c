#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *elem;
	char *separator = "";

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		elem = ht->array[i];
		if (elem)
		{
			while (elem)
			{
				printf("%s'%s': '%s'", separator, elem->key, elem->value);
				separator = ", ";
				elem = elem->next;
			}
		}
	}
	printf("}\n");
}
