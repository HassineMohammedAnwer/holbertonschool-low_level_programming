#include "hash_tables.h"

/**
 * hash_table_print - check the code
 * @ht: hash table
 *
 *
 * Return: None
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int indx;
	int v = 0;

	if (!ht)
		return;
	printf("{");
	for (indx = 0; indx <= ht->size; indx++)
	{
		if (ht->array[indx])
		{
			while (ht->array[indx])
			{
				if (v == 1)
					printf(", ");
				printf("'%s': '%s'", ht->array[indx]->key, ht->array[indx]->value);
				v = 1;
				ht->array[indx] = ht->array[indx]->next;

			}
		}
	}
	printf("}\n");
}
