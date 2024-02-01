#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key
 *
 * @key: key
 * @size: size of the hash table
 *
 * Return: Index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
