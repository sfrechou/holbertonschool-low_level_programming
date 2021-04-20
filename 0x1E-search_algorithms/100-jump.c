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
	size_t jump_step, prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	jump_step = sqrt(size);
	while (array[prev] < value)
	{
		printf("Value checked array[%li] = [%i]\n", prev, array[prev]);
		if (array[jump_step] >= value || jump_step >= size)
		{
			break;
		}
		else
		{
			prev = jump_step;
			jump_step = jump_step + sqrt(size);
		}
	}
	printf("Value found between indexes [%li] and [%li]\n", prev, jump_step);
	while (array[prev] < value && prev < size)
	{
		printf("Value checked array[%li] = [%i]\n", prev, array[prev]);
		prev++;
	}
	if (array[prev] == value)
	{
		printf("Value checked array[%li] = [%i]\n", prev, array[prev]);
		return (prev);
	}
	else
	{
		return (-1);
	}
}
