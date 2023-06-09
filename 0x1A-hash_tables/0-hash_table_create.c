#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: Size of the array
 * Return: Null for error or a pointer to a new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t;
	unsigned long int p;

	t = malloc(sizeof(hash_table_t));
	if (t == NULL)
		return (NULL);

	t->size = size;
	t->array = malloc(sizeof(hash_node_t *) * size);
	if (t->array == NULL)
		return (NULL);
	for (p = 0; p < size; ++p)
	{
		t->array[p] = NULL;
	}
	return (t);
}
