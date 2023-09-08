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
	hash_node_t *table[size];

	new_table = malloc(sizeof(hash_table_t));

	new_table->size = size;
	new_table->array = &table[0];

	return (new_table);
}
