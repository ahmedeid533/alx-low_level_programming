#include "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table
 *
 * @ht: hash table head
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	hash_table_t *hd = ht;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(hd->array);
	free(hd);
}
