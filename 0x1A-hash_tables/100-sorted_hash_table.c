#include "hash_tables.h"
/**
 * shash_table_create - Entry point
 * @size: the size of the array
 *
 *
 * Return: pointer to newly created hash table
*/

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hashtable;

	if (size <= 0)
		return (NULL);

	hashtable = malloc(sizeof(shash_table_t));
	if (hashtable == NULL)
		return (NULL);

	hashtable->size = size;
	hashtable->array = malloc(sizeof(shash_node_t **) * size);
	if (hashtable->array == NULL)
		return (NULL);

	return (hashtable);
}

/**
 * shash_table_set - Entry point
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	shash_node_t *newnode;
	shash_node_t *updateKey;

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

	newnode = malloc(sizeof(shash_node_t));
	if (newnode == NULL)
		return (0);

	newnode->key = strdup(key);
	newnode->value = strdup(value);
	if (ht->array[index] != NULL)
		newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}

/**
 * shash_table_get - Entry point
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key
 *
 * Return: value if it succeeded, NULL otherwise
*/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

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
}

#include "hash_tables.h"
/**
 * shash_table_print - Entry point
 * @ht: the hash table you want to print
 *
 *
 * Return: void
*/

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
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

#include "hash_tables.h"
/**
 * shash_table_print_rev - Entry point
 * @ht: the hash table you want to print
 *
 *
 * Return: void
*/

void shash_table_print_rev(const shash_table_t *ht)
{
	(void)ht;
}

/**
 * shash_table_delete - Entry point
 * @ht: the hash table you want to delete
 *
 *
 * Return: void
*/

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *auxnode, *tempnode;

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
