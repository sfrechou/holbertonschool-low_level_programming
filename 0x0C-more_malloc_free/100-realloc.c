#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Entry point
 * @ptr: s
 * @old_size: s
 * @new_size: d
 *
 * Return: Always 0 (Success)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
	{
		free(ptr);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
