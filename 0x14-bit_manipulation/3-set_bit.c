#include "holberton.h"

/**
 * set_bit - function that prints a list
 * @n: pointer to list to print
 * @index: index
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1 << index;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	*n = *n | m;
	return (1);
}
