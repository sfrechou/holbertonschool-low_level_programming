#include "search_algos.h"

/**
 * jump_search -  jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 *
 *
 * Return: first index of value found or -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t jump_step = 0, prev = 0;

	if (array == NULL)
		return (-1);

	jump_step = sqrt(size);
	while (array[prev] < value)
	{
		printf("Value checked array[%li] = [%i]\n", prev, array[prev]);
		if (jump_step >= size || array[jump_step] >= value)
		{
			break;
		}
		else
		{
			prev = jump_step;
			jump_step = jump_step + sqrt(size);
		}
	}
	if (prev >= size)
		prev = size - 1;

	printf("Value found between indexes [%li] and [%li]\n", prev, jump_step);
	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%li] = [%i]\n", prev, array[prev]);
		prev++;
	}
	if (prev < size && array[prev] == value)
	{
		printf("Value checked array[%li] = [%i]\n", prev, array[prev]);
		return (prev);
	}
	else
	{
		return (-1);
	}
}
