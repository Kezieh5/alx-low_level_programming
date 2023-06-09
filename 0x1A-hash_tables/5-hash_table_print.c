#include "hash_tables.h"
#include <stdbool.h>
/**
 * hash_table_print - fucntion to print a hash table
 * @ht: type pointer the hash_table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *element;
	bool flag = false;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == true)
				printf(", ");

			for (element = ht->array[i]; element != NULL;
				flag = true)
			{
				printf("'%s': '%s'", element->key,
				       element->value);
				element = element->next;
				if (element != NULL)
					printf(", ");
			}
		}
	}
	printf("}\n");
}
