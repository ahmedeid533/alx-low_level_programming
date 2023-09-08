#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - set table values
 *
 * @ht: the table with the size
 * @key: the key of the semi dic
 * @value: the value of the key
 * Return: int 1 success 0 fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[key_index(key, ht->size)];
	ht->array[key_index(key, ht->size)] = new_node;
}
