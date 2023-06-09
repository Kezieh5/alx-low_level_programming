#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key
 * Return: the value or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind;
	hash_node_t *current;

	ind = key_index((const unsigned char *)key, ht->size);
	if (ind >= ht->size)
	{
		return (NULL);
	}
	current = ht->array[ind];
	while (current && strcmp(current->key, key) != 0)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	return (current->value);
}
