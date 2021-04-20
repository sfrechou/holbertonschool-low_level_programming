#include "search_algos.h"

/**
 * binary_search -  linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 *
 *
 * Return: index of value found or -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid = 0, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != right)
				printf("%i, ", array[i]);
			else
				printf("%i\n", array[i]);
		}
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
