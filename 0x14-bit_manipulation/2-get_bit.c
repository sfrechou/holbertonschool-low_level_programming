#include "holberton.h"

/**
 * get_bit - function that prints a list
 * @n: pointer to list to print
 * @index: index
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = 1;

	if (index > n)
	{
		return (-1);
	}
	m <<= index;
	if ((m & n) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
