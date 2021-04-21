#include "search_algos.h"

int adv_binary_search(int *array, size_t left, size_t right, int value);

/**
 * advanced_binary -  advanced binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 *
 *
 * Return: first index of value found or -1
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;

	if (array == NULL)
		return (-1);
	return (adv_binary_search(array, left, right, value));
}

/**
 * advanced_binary -  advanced binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 *
 *
 * Return: first index of value found or -1
*/
int adv_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid = 0, i;

    if (right >= left)
    {
        mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%i\n", array[i]);
			else
				printf("%i, ", array[i]);
		}
		if (array[left] == value)
            return (left);

		if (array[mid] == value && array[mid - 1] != value)
            return (mid);

        if (array[mid] >= value)
            return adv_binary_search(array, left, mid, value);

		if (array[mid] < value)
	        return adv_binary_search(array, mid + 1, right, value);
	}
	return (-1);
}
