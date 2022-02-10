#include "hash_tables.h"

/**
 * key_index - implementation of the djb2 algorithm
 * @key: string used to generate hash value
 * @size: size of hash table
 * Return: index of key in hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, indx;

	hash = hash_djb2(key);
	indx = hash % size;
	return (indx);
}
