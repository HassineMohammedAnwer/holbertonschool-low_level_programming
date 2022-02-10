#include "hash_tables.h"

/**
 * hash_table_delete - check the code
 * @ht: hash table
 *
 *
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int indx;
	hash_node_t *node;

	if (!ht && !ht->array && !ht->size)
		return;
	for (indx = 0; indx < ht->size; indx++)
	{
		while (ht->array[indx])
		{
			node = ht->array[indx]->next;
			free(ht->array[indx]->key);
			free(ht->array[indx]->value);
			free(ht->array[indx]);
			ht->array[indx] = node;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
