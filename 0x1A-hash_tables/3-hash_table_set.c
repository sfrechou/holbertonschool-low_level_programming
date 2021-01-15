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
	hash_node_t *updateKey;

	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);
	if (key[0] == '\0')
		return (0);
	if (value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	updateKey = ht->array[index];

	while (updateKey != NULL)
	{
		if (strcmp(updateKey->key, key) == 0)
		{
			free(updateKey->value);
			updateKey->value = strdup(value);
			return (1);
		}
		updateKey = updateKey->next;
	}

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);

	newnode->key = strdup(key);
	newnode->value = strdup(value);
	if (ht->array[index] != NULL)
		newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}
