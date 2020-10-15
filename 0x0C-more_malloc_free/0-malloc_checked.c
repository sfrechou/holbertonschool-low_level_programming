#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 * @b: s
 *
 *
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *x;

	x = (unsigned int *)malloc(b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
