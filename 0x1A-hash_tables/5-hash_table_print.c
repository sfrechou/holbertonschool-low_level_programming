#include "hash_tables.h"
/**
 * hash_table_print - Entry point
 * @ht: the hash table you want to print
 *
 *
 * Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j = 0;

	while (ht->array[j] == NULL)
	{
		j++;
	}
	printf("{");
	for (i = j; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (i == j)
			{
				printf("'%s': '%s'", ht->array[j]->key, ht->array[j]->value);
			}
			else
				printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		}
	}
	printf("}\n");
}
