#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: hash table where to add or update the key/valu
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node = malloc(sizeof(hash_node_t));
	hash_node_t *current = NULL;

	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	if (node->key == NULL || node->value == NULL)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (0);
	}
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			free(node->key);
			free(node->value);
			free(node);
			return (1);
		}
		current = current->next;
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
