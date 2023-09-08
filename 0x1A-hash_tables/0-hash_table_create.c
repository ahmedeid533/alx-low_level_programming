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
	hash_node_t **table;

	new_table = malloc(sizeof(hash_table_t));
	table = malloc(sizeof(hash_node_t) * size);

	new_table->size = size;
	new_table->array = table;

	return (new_table);
}
