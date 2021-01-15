#include "hash_tables.h"
/**
 * hash_table_set - Entry point
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *newnode;

	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);
	if (key[0] == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	{
		return (0);
	}
	newnode->key = (char *)key;
	newnode->value = strdup(value);
	if (ht->array[index] != NULL)
		newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}
