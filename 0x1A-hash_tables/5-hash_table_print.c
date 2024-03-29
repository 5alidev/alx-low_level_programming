#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 *
 * @ht: hash table
 *
 * Return: Nothing (void)
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, counter = 0;
	hash_node_t *node = NULL;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			node = ht->array[index];
			while (node != NULL)
			{
				if (counter > 0)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				counter++;
			}
		}
	}
	printf("}\n");
}
