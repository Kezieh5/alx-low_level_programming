#include "hash_tables.h"

/**
 * hash_table_set - add element into hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value to keep
 * Return: 1 on success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_ht;
	char *n_value;
	unsigned long int index, i;

	if (ht == NULL || value == NULL || *key == '\0' || key == NULL)
	{
		return (0);
	}
	n_value = strdup(value);
	if (n_value == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = n_value;
			return (1);
		}
	}
	new_ht = malloc(sizeof(hash_node_t));
	if (new_ht == NULL)
	{
		return (0);
	}
	new_ht->key = strdup(key);
	if (new_ht->key == NULL)
	{
		free(new_ht);
		return (0);
	}
	new_ht->value = n_value;
	new_ht->next = ht->array[index];
	ht->array[index] = new_ht;
	return (1);
}
