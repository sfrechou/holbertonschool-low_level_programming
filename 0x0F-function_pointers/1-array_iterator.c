#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Entry point
 * @array: s
 * @size: s
 * @action: s
 *
 *
 * Return: Always 0 (Success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
