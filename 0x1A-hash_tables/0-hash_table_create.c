#include "hash_tables.h"

/**
 * hash_table_create - check the code for
 *
 * @size: size of table
 * Return: pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;

	if (size == 0)
		return (NULL);

	h = malloc(sizeof(hash_table_t));
	if (!h)
		return (NULL);
	h->size = size;
	h->array = malloc(sizeof(h->array) * size);
	if (h->array == NULL)
		return (NULL);

	return (h);
}
