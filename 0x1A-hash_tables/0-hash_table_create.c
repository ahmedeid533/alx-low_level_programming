#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create hash table
 *
 * @size: size of the hash table
 * Return: hash_table_t*
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t) * size);
	if (new_table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
