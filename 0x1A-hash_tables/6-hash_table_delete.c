#include "hash_tables.h"
/**
 * hash_table_delete - Entry point
 * @ht: the hash table you want to delete
 *
 *
 * Return: void
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *auxnode, *tempnode;

	if (ht == NULL)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		auxnode = ht->array[i];
		while (auxnode != NULL)
		{
			tempnode = auxnode->next;
			free(auxnode->key);
			free(auxnode->value);
			free(auxnode);
			auxnode = tempnode;
		}
	}
	free(ht->array);
	free(ht);
}
