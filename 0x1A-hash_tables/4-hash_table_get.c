#include "hash_tables.h"

/**
 * hash_table_get - check the code
 * @ht: hash table
 * @key: string used to generate hash value
 *
 * Return: value of element on success, NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);
	indx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[indx];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
