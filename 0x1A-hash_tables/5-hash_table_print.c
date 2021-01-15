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
	hash_node_t *temp;
	unsigned long int i, j = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	while (ht->array[j] == NULL)
		j++;

	printf("{");
	for (i = j; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (i == j)
				printf("'%s': '%s'", temp->key, temp->value);
			else
				printf(", '%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
	}
	printf("}\n");
}
