#include "hash_tables.h"
/**
 * hash_table_get - Entry point
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key
 *
 * Return: value if it succeeded, NULL otherwise
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index = 0;

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
/*	while (ht->array[index]->key != key)
	{
		if (ht->array[index]->next != NULL)
			ht->array[index] = ht->array[index]->next;
		else
			return (NULL);
	}
	return (ht->array[index]->value);*/
}
