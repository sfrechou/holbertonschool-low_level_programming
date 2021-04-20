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
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	while ((array[high] != array[low]) && (value >= array[low])
		&& (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));
		printf("Value checked array[%li] = [%i]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}

	if (value == array[low])
		return (low);
	pos = low + (((double)(high - low) / (array[high] - array[low]))
	* (value - array[low]));
	printf("Value checked array[%li] is out of range\n", pos);
	return (-1);
}
