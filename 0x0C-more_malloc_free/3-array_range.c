#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Entry point
 * @min: s
 * @max: s
 *
 *
 * Return: Always 0 (Success)
 */
int *array_range(int min, int max)
{

	int *ptr, size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;

	ptr = (int *)malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
