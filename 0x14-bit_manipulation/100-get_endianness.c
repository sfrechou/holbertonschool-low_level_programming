#include "holberton.h"

/**
 * get_endianness - function that prints a list
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int) *c);
}
