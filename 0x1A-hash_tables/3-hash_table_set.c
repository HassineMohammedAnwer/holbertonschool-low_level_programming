#include "hash_tables.h"

/**
 * hash_table_set - implementation of the djb2 algorithm
 * @ht: hash table
 * @key: string used to generate hash value
 * @value: value of node to implement
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx, size;
	hash_node_t *node, *h;

	if (!key || !value || !ht)
		return (0);
	size = ht->size;
	indx = key_index((const unsigned char *)key, size);
	h = ht->array[indx];
	while (h)
	{
		if (h && strcmp(key, h->key) == 0)
		{
			free(h->value);
			h->value = strdup(value);
			if (h->value == NULL)
				return (0);
			return (1);
		}
		h = h->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[indx];
	ht->array[indx] = node;
	return (1);
}
