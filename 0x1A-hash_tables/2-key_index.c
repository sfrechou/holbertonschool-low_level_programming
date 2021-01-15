#include "hash_tables.h"
/**
 * key_index - Entry point
 * @key: the key
 * @size: the size of the array pf the hash table
 *
 * Return:  index at which the key/value pair should be stored
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int num = 0, index = 0;

	num = hash_djb2(key);
	index = num % size;
	return (index);
}
