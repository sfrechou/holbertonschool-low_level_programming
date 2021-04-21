#include "search_algos.h"

int binary_search_(int *array, size_t left, size_t right, int value);

/**
 * exponential_search -  exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 *
 *
 * Return: first index of value found or -1
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;

	if (array == NULL)
		return (-1);

    bound = 1;
	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%li] = [%i]\n", bound, array[bound]);
		bound *= 2;
    }
	if (bound < size - 1)
	{
		printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, bound);
		return (binary_search_(array, bound / 2, bound, value));
	}
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, size - 1);
		return (binary_search_(array, bound / 2, size - 1, value));
	}
}

/**
 * binary_search_ -  exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 *
 *
 * Return: first index of value found or -1
*/
int binary_search_(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%i\n", array[i]);
			else
				printf("%i, ", array[i]);
		}
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			return (binary_search_(array, left, mid - 1, value));

		return (binary_search_(array, mid + 1, right, value));
	}
	return (-1);
}
