#include "hash_tables.h"

/**
 * key_index - get index of the key
 *
 * @key: the key value
 * @size: the table size
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
