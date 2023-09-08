#include "hash_tables.h"

/**
 * hash_table_get - get value for spasific key
 *
 * @ht: the table head
 * @key: the key to get the value
 * Return: char* 
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_node;
	unsigned long int idx, i;

	if (ht == NULL || key == NULL || *key == '\0' )
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			return (ht->array[i]->value);
		}
	}
	return (NULL);
}
